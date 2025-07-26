---
title: "KillerClock"
author: "Shuanak Bajaj"
description: "Making a Nixie tube-inspired clock but using LED"
created_at: "2025-07-25"
---

# July 25th: Getting to work after I got an Idea!

I was drooling at Nixie tube clocks but those arent available in India ;-; Then I got an idea, why not make it out of LEDs. Turns out, it wasnt so original, people have attempted it [before](https://www.reddit.com/r/electronics/comments/wgo8go/made_another_bigger_led_filament_tube_clock/). But I wasnt able to find any intructions, BOM, or schematic. So I am trying to create my own LED clock.

My inspiration-
<img width="1080" height="810" alt="image" src="https://github.com/user-attachments/assets/019a023b-7d9a-46eb-b0ef-908fc45435d1" />

I would be using LED filaments (Adafruit nooodles kind) to create 7 segment displays which would be mounted vertically onto a PCB. I would run it using a ESP 32 and connect it to the internet for time syncing.

Have started making the schemtatic. Since the 7segment LEDs are wired in a grid pattern, I will use a MAX7219 ic to controll them which is also widely used in commericial matrix displays. I want the numbers to be vertical, therfore I have added 4 2x4 connectors and wired them.
<img width="995" height="676" alt="image" src="https://github.com/user-attachments/assets/a37fa061-c16b-4d48-ab22-bb190f12a180" />
<img width="901" height="267" alt="image" src="https://github.com/user-attachments/assets/9b2a24ad-c39e-4463-84a8-af653bb981a3" />

The single led in between is for the separation between hours and minutes.
**Total time spent: 4h**

# July 26th: Schematic Complete, onto the more difficult part

Made the schematic. Turns out that the symbol for ESP32 was the wrong one. So I had to import the correct one from the internet.

<img width="1259" height="794" alt="image" src="https://github.com/user-attachments/assets/91ebe9ff-22aa-48a5-abc6-e638f64d8595" />
<img width="742" height="661" alt="image" src="https://github.com/user-attachments/assets/33e2ac5a-89fa-4e2a-b68a-5adcd7b13724" />

Idk why but it took me a lot of time to find the right footprints for all the components, I even had to define a custom footprint for my led filament.

<img width="866" height="183" alt="image" src="https://github.com/user-attachments/assets/e5bbc948-ce58-4a3f-890f-0dd0016e881e" />

I finally started making the schmatic. With a lot of vias, I was able to wire the numeric display.

<img width="330" height="656" alt="image" src="https://github.com/user-attachments/assets/d1d19673-40d9-44c3-8741-ffc248e50765" />

I had placed the connectors too closely at first then I realsied that the led panels would clash with each other. I i had to remove all the wiring and re-place them with corret distances. Now I have also taken into account the size of the test tubes that will be going over them.

<img width="1092" height="536" alt="image" src="https://github.com/user-attachments/assets/ef3b0fd5-f961-4270-9c72-f8c87e3bba69" />

Wired the MAX7219 with the connectors. Became very complex very fast. Just need to complete the esp32 and well be done.

<img width="1487" height="199" alt="image" src="https://github.com/user-attachments/assets/7cb7bf63-5d9f-473a-b4a9-034fe353bac8" />

Finally finished the the schematic. Watched a video about adding mouse bites to combine the different parts. Will do that.

<img width="1170" height="672" alt="image" src="https://github.com/user-attachments/assets/6518c9b8-332b-4845-aed0-3259f8af1ab5" />


**Total time spent: 5h**
