<div align="center">

<img width="922" height="521" alt="Screenshot 2026-08-19 at 3 38 53 AM" src="https://github.com/user-attachments/assets/27fc7184-cdac-43ff-bac5-a819c83728cb" />

</div>


|Title | Card-Reader |
|:-- |:--|
|Author | Sadrita Neogi|

## Overview
It's a Sd Card Reader So that you don't need to put it in your laptop to check the storage left in it. It consist of a 3d printed custom case also it is battery powered with a oled screen to see the data of the Sd card


## Schematic
 
<img width="611" height="422" alt="Screenshot 2026-08-19 at 3 36 57 AM" src="https://github.com/user-attachments/assets/e6d02900-bef7-4a1c-a1d8-a0e854a242f9" />

## PCB

<img width="516" height="468" alt="Screenshot 2026-08-19 at 3 37 14 AM" src="https://github.com/user-attachments/assets/5201cb92-627e-4df9-a69b-dfc0ee023db1" />


## Case 

<table border="0" cellpadding="10" cellspacing="0" style="border-collapse: collapse;">
  <tr>
    <!-- FRONT SIDE CARD -->
    <td align="center" valign="top" width="50%" style="background: #ffffff; border: 1px solid #d0d7de; border-radius: 12px; padding: 16px; box-shadow: 0 4px 12px rgba(0,0,0,0.05);">
      <img src="https://github.com/user-attachments/assets/a86ee017-8fbe-40fa-9c63-83af0eb5bffb" width="100%" alt="Front Side View" style="border-radius: 6px;" />
      <div style="margin-top: 12px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Helvetica, Arial, sans-serif; font-size: 13px; color: #57606a; font-weight: 600; text-transform: uppercase; letter-spacing: 0.5px;">
      </div>
    </td>
    <!-- SPACER FOR GITHUB MOBILE DEGRADATION -->
    <td width="2%">&nbsp;</td>
    <!-- BACK SIDE CARD -->
    <td align="center" valign="top" width="50%" style="background: #ffffff; border: 1px solid #d0d7de; border-radius: 12px; padding: 16px; box-shadow: 0 4px 12px rgba(0,0,0,0.05);">
      <img src="https://github.com/user-attachments/assets/ccd5137e-9bcf-43bd-b3f9-fd4380160a7d" width="100%" alt="Back Side View" style="border-radius: 6px;" />
      <div style="margin-top: 12px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Helvetica, Arial, sans-serif; font-size: 13px; color: #57606a; font-weight: 600; text-transform: uppercase; letter-spacing: 0.5px;">
      </div>
    </td>
  </tr>
</table>


## Final PCB


<table border="0" cellpadding="10" cellspacing="0" style="border-collapse: collapse;">
  <tr>
    <!-- FRONT SIDE CARD -->
    <td align="center" valign="top" width="50%" style="background: #ffffff; border: 1px solid #d0d7de; border-radius: 12px; padding: 16px; box-shadow: 0 4px 12px rgba(0,0,0,0.05);">
      <img src="https://github.com/user-attachments/assets/92edc2cd-1ab6-4655-8fd7-7c0f591c1f4c" width="100%" alt="Front Side View" style="border-radius: 6px;" />
      <div style="margin-top: 12px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Helvetica, Arial, sans-serif; font-size: 13px; color: #57606a; font-weight: 600; text-transform: uppercase; letter-spacing: 0.5px;">
        ▲ Front Side View
      </div>
    </td>
    <!-- SPACER FOR GITHUB MOBILE DEGRADATION -->
    <td width="2%">&nbsp;</td>
    <!-- BACK SIDE CARD -->
    <td align="center" valign="top" width="50%" style="background: #ffffff; border: 1px solid #d0d7de; border-radius: 12px; padding: 16px; box-shadow: 0 4px 12px rgba(0,0,0,0.05);">
      <img src="https://github.com/user-attachments/assets/1d114fa2-1e3b-4bdd-aef0-66b1d41cd4df" width="100%" alt="Back Side View" style="border-radius: 6px;" />
      <div style="margin-top: 12px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Helvetica, Arial, sans-serif; font-size: 13px; color: #57606a; font-weight: 600; text-transform: uppercase; letter-spacing: 0.5px;">
        ▲ Back Side View
      </div>
    </td>
  </tr>
</table>


# Project Bill of Materials (BOM)

A complete breakdown of all hardware components, pricing, and supplier sources required to build the project.

| Name | Purpose | Quantity | Unit Price (USD) | Distributor | Purchase Link |
| :--- | :--- | :---: | :---: | :--- | :--- |
| **PCB (MOQ 5)** | Main circuit board | 5 | $4.00 | JLC | [JLCPCB](https://jlcpcb.com/) |
| **Seeed Studio XIAO ESP32S3** | Microcontroller / Control unit | 1 | $11.00 | Robu | [Robu.in](https://robu.in/product/seeed-studio-xiao-esp32s3-2-4ghz-wifi-ble-5-0/) |
| **OLED 1.3" (I2C)** | System display | 1 | $3.30 | Robu | [Robu.in](https://robu.in/product/1-3-inch-i2c-oled-display-module-4-pin-white/) |
| **400mAh 3.7V Micro LiPo** | Power supply | 1 | $2.00 | Robu | [Robu.in](https://robu.in/product/nova-303040-400mah-3-7v-micro-lipo-battery-pack/) |
| **Slide Switch** | Power toggle | 10 | $0.20 | Robu | [Robu.in](https://robu.in/product/1-month-warranty-255/) |
| **Ceramic Capacitor Assorted Kit** | Circuit filtering | 1 | $1.80 | Robu | [Robu.in](https://robu.in/product/ceramic-capacitor-assorted-kit-30-kinds-from-2pf-0-1uf/) |
| **Micro SD Card Reader Module** | External storage | 1 | $0.40 | Robu | [Robu.in](https://robu.in/product/micro-sd-card-module/) |
| **3D Printing Filament** | Enclosure fabrication | 1 | $3.00 | Printing Legion | Local / Vendor |

### Cost Summary

* **Shipping (Inc. PCB):** $13.00
* **Tax:** $1.10
* **Subtotal:** $39.80
* **Total (Rounded Off):** **$40.00**

---
