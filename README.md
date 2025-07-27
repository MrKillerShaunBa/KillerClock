# KillerClock

This is a Nixie tube-inspired clock made using LED filaments. These filaments are strings of micro-LEDs which imitate the look of a tungsten filament. It uses ESP-32, which syncs time with an NTP server using the on-board wifi. It uses a MAX7219 ic to run the 7 segments. Everything is powered using a 5V 2A wall adaptor. There are also Glass test tubes to match the look of a Nixie tube.

I got the inspiration when I chanced upon a [Nixie tube clock](https://nixieshop.com/), which I found very interesting. Since Nixie tubes aren't available reliably in India, I made one using LEDs.

![Full](/assets/Full.png)

## CAD

![Case](/assets/Case.png)

![Case Parts](/assets/Case_sep.png)

![PCB Top](/assets/PCB_top.png)

![PCB Bottom](/assets/PCB_bottom.png)

## PCB

![Schematic](/assets/Schematic.png)

![PCB](/assets/PCB.png)

![PCB Front](/assets/PCB_front.png)

![PCB Back](/assets/PCB_back.png)

# BOM
| Product | Quantity (MOQ) | Source | Total Price(INR)(includes tax) | Price($)(Converted) | Link |
| :-----: | :-----: | :-----: | :-----: | :-----: | :-----: |
| MAX7219 8-Digit LED Display Driver IC | 2 | eBhoot | 225 | 2.60 | [here](https://ebhoot.in/shop-2/ics/driver-interface-ic/max7219-8-digit-led-display-driver-ic/) |
| DC Power Jack Female | 2 | eBhoot | 14.6 | 0.17 | [here](https://ebhoot.in/shop-2/connectors/dc-005-dc-power-jack-female-adapter-pcb-mount-2-1-x-5-5mm/) |
| ESP32 Development Board | 1 | eBhoot | 377.6 | 4.37 | [here](https://ebhoot.in/shop-2/esp-wifi-boards/esp32-development-board-type-c-usb-ch340c-wifi-bluetooth-ultra-low-power-dual-core/) |
| 10uF 25V Electrolytic Capacitor | 3 | eBhoot | 5.31 | 0.061 | [here](https://ebhoot.in/shop-2/electronics-components/capacitors/10uf-25v-electrolytic-capacitor/) |
| 0.1uF Ceramic Capacitor | 5 | eBhoot | 5.3 | 0.061 | [here](https://ebhoot.in/shop-2/electronics-components/capacitors/0-1uf-104-ceramic-capacitor/) |
| 10K Ohm Resistor | 10 | eBhoot | 5.9 | 0.068 | [here](https://ebhoot.in/shop-2/electronics-components/resistors/10k-ohm-0-25watt-carbon-film-resistor/) |
| 5v-2A DC adaptor | 1 | eBhoot | 123.9 | 1.43 | [here](https://ebhoot.in/shop-2/power-supply/adapters/5v-2a-dc-adapter-with-led-dual-pin-dc/) |
| Ebhoot Shipping | ~ | eBhoot | 90 | 1.04 | ~ |
| 40×2 Pin Male Berg Strip | 2 | Sharvi | 28.91 | 0.33 | [here](https://sharvielectronics.com/product/40x2-pin-male-berg-strip-break-away-header-right-angle-2-54mm-pitch/) |
| 40x1 Pin Male Berg Strip | 1 | Sharvi | 6.8 | 0.079 | [here](https://sharvielectronics.com/product/40x1-pin-male-10mm-height-berg-header-straight-2-54mm-pitch/) |
| 40x1 Pin Female Berg Strip | 1 | Sharvi | 9.7 | 0.11 | [here](https://sharvielectronics.com/product/40x1-pin-female-berg-strip-break-away-header-straight-2-54mm-pitch/) |
| 2x4 pin female berg strip | 5 | Sharvi | 49.7 | 0.57 | [here](https://sharvielectronics.com/product/2x4-8pin-female-berg-strip-break-away-header-straight-2-54mm-pitch/) |
| 24 Pin IC Base | 5 | Sharvi | 29.3 | 0.34 | [here](https://sharvielectronics.com/product/24-pin-ic-base-for-dip-24-package/) |
| M2x6mm Allen bolt | 10 | Sharvi | 112.7 | 1.30 | [here](https://sharvielectronics.com/product/m2x6mm-allen-socket-head-cap-bolt-mild-carbon-steel/) |
| M2x20mm Allen Bolt | 10 | Sharvi | 163.5 | 1.89 | [here](https://sharvielectronics.com/product/m2x20mm-allen-socket-head-cap-bolt-mild-carbon-steel/) |
| M2X3mm Brass Heat Insert | 10 | Sharvi | 33.7 | 0.39 | [here](https://sharvielectronics.com/product/m2x3-mm-brass-heat-set-threaded-round-insert-nut/) |
| Sharvi Shipping | ~ | Sharvi | 75 | 0.87 | ~ |
| LED Filament 3V 26mm | 11*3 | Adafruit | ~ | 54.34 | [here](https://www.adafruit.com/product/5505) (Not available in this size anywhere in India; Inclues tax and shipping) |
| 38x200mm test tubes | 12 | Amazon | 990 | 11.45 | [here](https://amzn.in/d/gJka92f) |
| 10x75mm test tubes | 6 | Amazon | 99 | 1.15 | [here](https://amzn.in/d/571r95v) |
| PCB | 5 | JLC PCB | | 17.76 | Used coupon and includes shipping | 
| Case | 1 | Print Legion | | ~5 | Only Shipping |

Total Cost- $106-110
