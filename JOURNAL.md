---
title: "DMXEasy"
author: "llextv"
description: "A plate for manage all DMX easely and not expensive"
created_at: "2026-05-29"
---

# May 31: Reflection about product

My idea is to create a plate like Wolfmix ? for DMX Management without having to spend a fortune and easily reproducible.

My inspiration was this:
![Inspi wolfmix](https://static.sonovente.com/img/library/zoom/91/450/91233_3.jpg)
![Inspi DMX Controler](https://m.media-amazon.com/images/I/51R4iJw7JXL._AC_UF1000,1000_QL80_.jpg)

And this is my idea on paper: 
![Paper inspi](https://cdn.hackclub.com/019e7e2f-b365-7511-9036-f52c72146e74/paper.jpg)

A app for tablet for dashboard controlled by this dmx table.

All flux generate from slider ... going to be outputed in 2 DMX universe & (1 Art/net ??)

BOM of components:

- 6 faders (https://fr.aliexpress.com/item/1005006152089336.html) = 6 * 1.5€
- 53 buttons (https://fr.aliexpress.com/item/1005003911184656.html) = 1 * 14,79€

For controll:
- 2x ESP-WROOM-32 (https://fr.aliexpress.com/item/1005005655238798.html) = 2*5€
  -> One for logic and generate DMX
  -> One for manage inputs
- 2x  MAX485 Module RS-485 (https://fr.aliexpress.com/item/1005005737922222.html) = 1*2.44€

For power:
- Power 5V 4A (https://fr.aliexpress.com/item/1005008468643815.html) = 1 * 9,59€
- Electrolytic Capacitor (470uF 16V) (https://fr.aliexpress.com/item/1005009417460390.html) = 1 * 3,99€
- 20Pcs Ceramic capacitor 50V (100nF 50V) (https://fr.aliexpress.com/item/1005012122696428.html) = 1 * 6,09€
- ON-Off Toggle Switch (https://fr.aliexpress.com/item/1005010015277754.html) = 1 * 1.13€
- 1k Ohm (https://fr.aliexpress.com/item/1005011813359681.html) = 1 * 4,39€
- 10k Ohm (https://fr.aliexpress.com/item/1005011813359681.html) = 1 * 5.19€
- 120 Ohm (https://fr.aliexpress.com/item/1005011813359681.html) = 1 * 5.19€
- 100 x Diode (https://fr.aliexpress.com/item/1005002339916163.html) = 1 * 0,94€
- XLR 3Pin Panel Mount Connectors (4PCS XLR 3Pin Panel Mount Connectors Male/Female Durable Metal Housing Silver Jack for Pro Audio Mic Speaker) = 1 * 4.19€
- DC Power Jack (https://fr.aliexpress.com/item/1005011863804603.html) = 1 * 1,23€
- Panel Mount Fuse (10pcs/lot Panel Mount PCB Fuse Holder Case with transparent Cover 5x20mm 250V) = 1 * 1.79€
- Glass Fuse 250V 2A = 1 * 1.96€

Proto:
- PCB Circuit Prototyping Board (PCB Circuit Prototyping Board Double Side Prototype Boards DIY Universal Printed Perfboard Electronic Kit) = 1 * 4.79€
- Wire (https://fr.aliexpress.com/item/1005003269498051.html) = 1 * 3.99€


For a total of 93,86 € (without PCB / 3D print (and fail ...)) = arround $109,45

**Total time spent: 4 hours**

# June 1: Electric design ...

This is total BOM:
2 × ESP32-WROOM-32
2 × MAX485
6 × faders 10k
53 × boutons
53 × 1N4148
8 × 10kΩ
2 × 1kΩ
2 × 120Ω
1 × 330Ω
10 × 100nF
2 × 470µF
1 × fusible 2A + support
1 × interrupteur
1 × jack DC 5.5×2.1
2 × XLR DMX
perfboard + câblage

This is tinkercad scheme:

![alt text](https://cdn.hackclub.com/019e84a2-3a85-72f4-a779-816ac0cea62a/tk1.png)
For buttons matrices

For the moment it's this:
![alt text](https://cdn.hackclub.com/019e84a2-73f4-7537-bf09-aa52ffbb638e/elec.png)

This is finished:
![alt text](https://cdn.hackclub.com/019e84a2-8dc8-7522-ad71-d8ddc6de3124/elecFinish.png)

I spend lot of time on this scheme because I made multiple calques for allow me to separate differents components or electrical / data wire for example ...

**Total time spent: 3 hours**

# June 2: KiCad

Today I work on 3d print
For size of hole:
14 mm × 14 mm per switches
70 mm × 5 à 6 mm per fader

This is my design:

![alt text](https://cdn.hackclub.com/019e8902-bd30-7ece-b995-ffe8bfd304ba/kicadImg.png)

I have alrealy make swicthe hole so it's easy (more than fader because I never made this)

All of this go to be print in 3d for the moment I think (for debug i would like to print just the top of plate)

**Total time spent: 3 hours**

# June 3: Software

Today, I start to build software (it's very difficult for the moment to see where I go with my script lol):
Here is code with help of AI (not tested because I cannot), AI help me to make base without errors, my jobs is to connect all principally
This is code:
(Available in dev/ESP/ESP_DMX/DMX Controller)

![alt text](https://cdn.hackclub.com/019e8efa-01ac-77e6-b00f-4cd5df39c927/dev.png)

My time are spend on understand code (I'm web dev, not arduino dev lol)
I also make reflection about documentation from JSON libs, esp_dmx and other librairies

**Total time spent: 2.5 hours**
