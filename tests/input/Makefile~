# see http://www.micahcarrick.com/tutorials/avr-microcontroller-tutorial/getting-started.html

blink.hex: blink.c
	avr-gcc -mmcu=atmega328p -Wall -Os -o blink.elf blink.c
	avr-objcopy -j .text -j .data -O ihex blink.elf blink.hex

prog:
	avrdude -p m328p -c usbasp -e -U flash:w:blink.hex -U lfuse:w:0xFF:m -U hfuse:w:0xD9:m -U efuse:w:0x06:m
#	avrdude -p m328p -c usbasp -e -U flash:w:blink.hex -U lfuse:w:0xFF:m -U hfuse:w:0xDE:m -U efuse:w:0x05:m
