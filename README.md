# mini-kindle
halflife week 4!!! I made a mini E-reader that can hold 1 book and be used as a keychain!
## Features/parts
- holds one book of your choice!
- includes button to go forward a page
- includes button to go back a page
- is rechargeable!
- can last maybe 6 weeks between charges (I haven't tested yet, just based on a rough calculation)
- brain is a raspberry beetle ( I thing it has like the same chip as a pico)
- brain goes into sleep mode when not actively in use to save power 
## Wireing
Here is a picture of the secmatic:
 <img width="3000" height="4000" alt="20261101_195529" src="https://github.com/user-attachments/assets/f3c753c1-3f33-42ba-9397-d581577ca313" />
and here is a picture of the render of the pcb (there won't acelly be pins in the final one): 
<img width="3000" height="4000" alt="20261101_205042" src="https://github.com/user-attachments/assets/418b3073-8ef3-4086-8169-2706493e994c" />

## Cad
I made a case to put all the pieces in, here is a picture of that case and the link to the onshape if you need that: 
<img width="3000" height="4000" alt="20261101_153754" src="https://github.com/user-attachments/assets/c3cdd076-3f9d-404b-8d3d-bb3fdde09dab" />


Onshape link: https://cad.onshape.com/documents/6e549ac6539405f0df179ab4/w/f1b3ef2bc73e41cfa7fc2db8/e/72f671553d1f5b2b1cd055b9?renderMode=0&uiState=6ae805c04f4c2c1c2ba22009
## code
I coded the ardunio ide, my dad helped me a lot with the code. the file for the code is in the Repository but so far it is just a prototype because I haven't been able to test it with an actual physical thing yet. One thing to note is that if you make this you will have to replace the insert book here with the text of a book. so far you just have to copy and paste it which is a bit annoying but not to bad.
I also have a file for the book called "A princess of Mar" just in case you don't have access to a book. A Princess of Mars is public domain so there is no restrictions on providing downloads or using the book.  

## Assembly
as I haven't built the thing myself, the assemby will improve in the future, but here are the steps,
- Gather all materials and print the case
- solder all pieces to the pcb
- put all the peices in a sandwich in the order of Screen, Pcb, Battery and beetle on one layer
- place inside case making sure that the usb-c is sticking out of the hole at the bottom of the case
- glue on the lid of the case
- upload code  
## Bill of Materials

| Item | Qty | Supplier | Cost/item | Total |
|------|-----|----------|-----------|-------|
| [Beetle RP2350 mini dev board](https://www.amazon.com/dp/B0F5PQMT6S) | 1 | DFRobot | $6.90 | $6.90 |
| [1.54" e-paper display](https://www.amazon.com/dp/B071HW4Z6N) | 1 | Waveshare | $12.99 | $12.99 |
| [Connector for screen (JST PH 2.0 mm 8-pin)](https://www.amazon.com/dp/B0DMW9N61X) | 1 | WOWOONE | $0.79 | $0.79 |
| [3D printed part (PLA filament)](https://us.store.bambulab.com/products/pla-basic-filament) | 1 | Bambu | $0.36 | $0.36 |
| [3.7 V battery](https://www.amazon.com/dp/B07C9R84QS) | 1 | Azytues | $7.99 | $7.99 |
| [Buttons](https://www.amazon.com/dp/B07VSNN9S2) | 1 | QTEATAK | $0.06 | $0.06 |
| Estimated shipping | 1 | | | $0.00 |
| **Total** | | | | **$29.09** |
