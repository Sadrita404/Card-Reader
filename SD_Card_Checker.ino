#include <SPI.h>
#include <SD.h>
#include <Wire.h>
#include <U8g2lib.h>

#define SD_CS   3
#define OLED_SDA 4
#define OLED_SCL 5

U8X8_SH1106_128X64_NONAME_HW_I2C u8x8(U8X8_PIN_NONE);

void showMessage(const char* line1, const char* line2 = "", const char* line3 = "") {
  u8x8.clear();
  u8x8.drawString(0, 1, line1);
  u8x8.drawString(0, 3, line2);
  u8x8.drawString(0, 5, line3);
}

void setup() {
  Wire.begin(OLED_SDA, OLED_SCL);
  u8x8.begin();
  u8x8.setFont(u8x8_font_chroma48medium8_r);

  showMessage("SD Checker", "Insert Card...");

  SPI.begin(8, 9, 10, SD_CS);

  if (!SD.begin(SD_CS)) {
    showMessage("Card Error!", "No SD Card", "Or Bad Format");
    return;
  }

  uint8_t cardType = SD.cardType();
  if (cardType == CARD_NONE) {
    showMessage("No SD Card", "Detected!");
    return;
  }

  uint64_t totalBytes = SD.totalBytes();
  uint64_t usedBytes = SD.usedBytes();
  uint64_t freeBytes = totalBytes - usedBytes;

  float totalGB = (float)totalBytes / (1024.0 * 1024.0 * 1024.0);
  float freeGB = (float)freeBytes / (1024.0 * 1024.0 * 1024.0);

  char line1Buf[17];
  char line2Buf[17];
  char line3Buf[17];

  if (cardType == CARD_MMC) {
    snprintf(line1Buf, sizeof(line1Buf), "Type: MMC");
  } else if (cardType == CARD_SD) {
    snprintf(line1Buf, sizeof(line1Buf), "Type: SDSC");
  } else if (cardType == CARD_SDHC) {
    snprintf(line1Buf, sizeof(line1Buf), "Type: SDHC/XC");
  } else {
    snprintf(line1Buf, sizeof(line1Buf), "Type: Unknown");
  }

  snprintf(line2Buf, sizeof(line2Buf), "Free: %.2f GB", freeGB);
  snprintf(line3Buf, sizeof(line3Buf), "Size: %.2f GB", totalGB);

  showMessage(line1Buf, line2Buf, line3Buf);
}

void loop() {
}
