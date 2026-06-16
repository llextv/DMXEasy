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

# June 4: Update scheme
First, I clean my scheme and I made lot of calques in my scheme, it's allow me to disable part of circuit for precision/

![scheme](https://cdn.hackclub.com/019e9399-19b4-7410-afec-8760b8c219c9/scheme.png)

I start a big part of scheme: adressing all wire (I spend lot of time in this because check of all documentation of all component of this circuit)
![wireScheme](https://cdn.hackclub.com/019e9399-0de1-7728-997e-5f1a1104ac3a/wireScheme.png)

**Total time spent: 3.5 hours**

# June 5: Keycaps occupation
Today, my job is to find good keycaps or create one example
I have find this:
![keycaps](https://cdn.hackclub.com/019e99ca-0c6f-736f-b817-816d54de15db/keycaps.png)

[KeycapsLink](https://cults3d.com/fr/mod%C3%A8le-3d/divers/blank-keycap-bottom-row-1-25u)

Differents problem with this keycaps:
-> At the base it's for resine print
-> size of 1.25U but my switches is 1U ? I gonna try ...
All keycaps will be 3D printed

My work now is to estimate price of print
![cura1](https://cdn.hackclub.com/019e99ca-1592-785e-9991-94579921c08b/cura1.png)
This config of print optimised for supports
![cura2](https://cdn.hackclub.com/019e99ca-1bfb-7d8a-8504-4798de29fe46/cura2.png)
![cura3](https://cdn.hackclub.com/019e99ca-2423-7153-b6d4-63dfadeeb57c/cura3.png)

One keycaps:
![cura4](https://cdn.hackclub.com/019e99ca-2e6a-7387-8c38-2958c6cc1b64/cura4.png)

So beautiful: 
![cura5](https://cdn.hackclub.com/019e99ca-5482-7f69-8c7d-13f0c72e912d/cura5.png)

Finally it's this for 53 btns
![cura6](https://cdn.hackclub.com/019e99ca-8592-7454-8404-96be8da77de7/cura6.png)

Finally it's this:
![cura7](https://cdn.hackclub.com/019e99ca-8ff8-7415-9475-c6d95f59edf3/cura7.png)

arround 120g of plastic

**Total time spent: 2 hours**

# June 6: Constrain occupation
I start to make reflection arround constraint of our dmx table.

First constrain: Strenght
I need to add feet to my design to support the top; we'll have to see when that's printed.
![fusion1](https://cdn.hackclub.com/019e9e94-f52e-7fcc-9e45-e847bc3e494f/fusion1.png)

Second constrain: Heat
I need to think about adding ventilation: first option: add one or two fans to remove the heat.

Thirth constrain: size of print
I need to think of a way to join different 3D printed parts together.
First idea: heat them to melt whatever would bond them?
Second idea: hot glue (no, I'm kidding lol)

I now need to confirm my solutions:
for First constrain I will wait all component for see

Second constrain:
Make grid for stay air pass on the case
I think ventirad is overkill for my case ?
![constrain2](https://cdn.hackclub.com/019e9e95-274d-7f18-b2f8-9affcbe5d38c/constrain2.png)
(is back of my case)
I halso add a hole:
![holeconstrain2](https://cdn.hackclub.com/019e9e95-674d-7483-b361-cc3d35ffba1b/holeconstrain2.png)
(for 2 universe and 1 power)
![btnconstrain2](https://cdn.hackclub.com/019e9e95-a893-7018-b30b-01edb2420c8e/btnconstrain2.png)
I also add a hole for ON/OFF btn

Thirth constrain:
I print little part for test heat it
![Constrain3](https://cdn.hackclub.com/019e9e95-e8a7-7bee-bba9-5bc2d694b3f1/img3constrain.jpg)

**Total time spent: 4 hours**

# June 7: Safety Check & other info
Go make a safety check:
- Put a heat shrink tubing for each connexion (164PCS 2: 1 Cable Shrink Tube Kit Heat Assorted Pack Thermoretractile Insulation Sleeving Cable Wire Shrink Wrapping for DIY) = 1 * 2.19€

We need to do something to fix each component:
For ESP:
![ESP](https://cdn.hackclub.com/019ea3c9-a3ef-797f-a0de-b8a4024ccb83/espmaintenaner.png)

For MAX485:
![MAX485](https://cdn.hackclub.com/019ea3c9-9bd2-7a12-af9c-38a0236442be/MAX845.png)

I have made an assembling with this:
![assembling](https://cdn.hackclub.com/019ea3c9-b9da-74af-88c9-6d7fa96a483b/assembling.png)

What I need:
- Tin cable for welding (https://fr.aliexpress.com/item/1005009973086759.html) = 1 * 4,59€

**Total time spent: 3.5 hours**

# June 8: Recap all my docs for see where I go
All is in title !

**BOM:**
- 6 faders (https://fr.aliexpress.com/item/1005006152089336.html) = 6 * 1.5€ = 9€
- 53 buttons (https://fr.aliexpress.com/item/1005003911184656.html) = 1 * 14,79€

For controll:
- 2x ESP-WROOM-32 (https://fr.aliexpress.com/item/1005005655238798.html) = 2*5€ = 10€
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
- PCB Circuit Prototyping Board (PCB Circuit Prototyping Board Double Side Prototype Boards DIY Universal Printed Perfboard Electronic Kit) = 1 * 3,19€
- Wire (https://fr.aliexpress.com/item/1005006996255957.html) = 1 * 2,79€
- Tin cable for welding (https://fr.aliexpress.com/item/1005009973086759.html) = 1 * 4,59€
- Heat shrink tubing for each connexion (164PCS 2: 1 Cable Shrink Tube Kit Heat Assorted Pack Thermoretractile Insulation Sleeving Cable Wire Shrink Wrapping for DIY) = 1 * 2.19€

For print:
- 1 Kg PLA (https://fr.aliexpress.com/item/1005007175412873.html) = 1 * 15,99€

Total: 
115,94€ = $135,22

I made aliexpress shopping card:
![aliexpress](https://cdn.hackclub.com/019ea840-0a52-7b91-a6ff-e8ae31e91cd1/aliexpress.png)
so I remake all link of my BOM and all prices

**Case:**
![face1](https://cdn.hackclub.com/019ea840-1c26-7bdb-a971-4684545e59a9/face1.png)
![face2](https://cdn.hackclub.com/019ea840-22cc-7bb4-8004-51aa5e3d1601/face2.png)
![face3](https://cdn.hackclub.com/019ea840-2a3b-76fd-826f-396049e7bc31/face3.png)
![face4](https://cdn.hackclub.com/019ea840-3185-77f0-8094-3448adbb776b/face4.png)

**Scheme:**
![scheme](https://cdn.hackclub.com/019ea840-8a1d-7e76-b6ec-80f98a149ecf/scheme1.png)
![scheme](https://cdn.hackclub.com/019ea840-947c-7254-9663-6ddf17bfb7d4/scheme2.png)
![scheme](https://cdn.hackclub.com/019ea840-9ea5-7d7f-bafd-684191c5ab76/scheme3.png)
![scheme](https://cdn.hackclub.com/019ea840-a94a-7f4a-a583-fcd4d778e3f2/scheme4.png)
![scheme](https://cdn.hackclub.com/019ea840-b62b-7777-bc63-e0acaa00ceb1/scheme5.png)
![scheme](https://cdn.hackclub.com/019ea840-cb90-79dc-a2a0-0d4cffd29459/tk1.png)

**Script**
[Here script files](dev/ESP/ESP_DMX/DMX_Controller/DMX_Controller.ino)

**Files**
[Case](assets\DMXEasy.f3d)
[Scheme](assets\scheme.pdn)

I'm now ready for build it, I think

**Total time spent: 3 hours**

# June 16: After wait I have received response about my project

I have received this message from reviewer:
Hey! 
You will need an assembled model of the project with all the electronics components and case, also I am unable to understand your wiring diagram, please have a clean labelled diagram and dont forget to upload the step files for CAD :3

Whats I understand:
- I need to make a assembling file for case
- Scheme is actually difficult to read ?

First pb:
I decided: I hate Fusion 360, cannot import stl because of cloud space .... lot of bugs...
![assemblingAll](https://cdn.hackclub.com/019ecfe7-ca79-73af-a33e-285ea5930a3f/assemblingAll.png)
![assemblingAll2](https://cdn.hackclub.com/019ecfe7-ddde-71da-be12-7aa3c81692a3/assemblingAll2.png)

See file in assets\AssemblageDMXEasy.f3z

Second pb:
![newScheme](https://cdn.hackclub.com/019ecfe8-0a48-71f4-81ff-893876d2317a/nScheme.png)
I added data on my scheme but I would like to know what's cannot be understand ?
Maybe the buttons part or faders part because it corresponds to the matrix diagram that was created on Tinkercad ? ![scheme](https://cdn.hackclub.com/019ea840-cb90-79dc-a2a0-0d4cffd29459/tk1.png)



And the files are in assets file of repo for the scheme.pdn (paint.net) & Fusion 360 file
**Total time spent: 4 hours**