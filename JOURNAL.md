---
title: "KillerClock"
author: "Shuanak Bajaj"
description: "Making a Nixie tube-inspired clock but using LED"
created_at: "2025-07-25"
---

# July 25th: Getting to work after I got an Idea!

I was drooling at Nixie tube clocks but those arent available in India ;-; Then I got an idea, why not make it out of LEDs. Turns out, it wasnt so original, people have attempted it [before](https://www.reddit.com/r/electronics/comments/wgo8go/made_another_bigger_led_filament_tube_clock/). But I wasnt able to find any intructions, BOM, or schematic. So I am trying to create my own LED clock.

I would be using LED filaments (Adafruit nooodles kind) to create 7 segment displays which would be mounted vertically onto a PCB. I would run it using a ESP 32.

Have started making the schemtatic. Since the 7segment LEDs are wired in a grid pattern, I will use a MAX7219 ic to controll them which is also widely used in commericial matrix displays. I want the numbers to be vertical, therfore I have added 4 2x4 connectors and wired them.
<img width="995" height="676" alt="image" src="https://github.com/user-attachments/assets/a37fa061-c16b-4d48-ab22-bb190f12a180" />
<img width="901" height="267" alt="image" src="https://github.com/user-attachments/assets/9b2a24ad-c39e-4463-84a8-af653bb981a3" />


**Total time spent: 1h**
