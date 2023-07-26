# touchEncoder7 for Automation.art
Encoder made of touch contacts, prototype. Very economical version

#### Right away about bugs that were fixed in the scheme after the first prototype) 
!There were no errors in this board, everything works at once

###  How does it work?
You place the board in the desired position, secure it, and you can detect the movement of the object above the board (absolute position). You can use both contact and non-contact methods, e.g. through a plastic layer. Capacitive contacts are used. More information about contacts in the code. An example can be seen in the video

### Main features
- One-piece board without wires
- Microcontroller with antenna
- Mounting holes
- 4 indicator LEDs
- Connection of i2c sensors (e.g. OLED 0.91)
- Uart programming
- 16 sensor pads (actually 8)
- Connection of an external contact or button (pins out)
- Ldo 3.3v

### Examples of use
- Controlling the sound as a slider
- Determining the position of the contact in linear space
- Setting anything 0-100%

### Current PCB release 
[![touch_aelmaker](/Image/touchencoder(1).png "touch_aelmaker")](/Image/touchencoder(1).png "touch_aelmaker")  
[![touch_aelmaker](/Image/touchencoder(2).png "touch_aelmaker")](/Image/touchencoder(2).png "touch_aelmaker")
[![touch_aelmaker](/Image/touchencoder(3).png "touch_aelmaker")](/Image/touchencoder(3).png "touch_aelmaker")  

### Manufactured device 

[![touch_aelmaker](/Image/touchencoder(2).jpg "touch_aelmaker")](/Image/touchencoder(2).jpg "touch_aelmaker")
[![touch_aelmaker](/Image/touchencoder(4).jpg "touch_aelmaker")](/Image/touchencoder(4).jpg "touch_aelmaker")
[![touch_aelmaker](/Image/touchencoder(3).jpg "touch_aelmaker")](/Image/touchencoder(3).jpg "touch_aelmaker")
[![touch_aelmaker](/Image/touchencoder(5).jpg "touch_aelmaker")](/Image/touchencoder(5).jpg "touch_aelmaker")
[![touch_aelmaker](/Image/touchencoder(6).jpg "touch_aelmaker")](/Image/touchencoder(6).jpg "touch_aelmaker")

### Case

Case in files and sketchup

### Specifications

| Name | Justification |
| ------------ | ------------ |
| Esp32 | and that's it, everything else is not required as the device is very simple and ingenious
