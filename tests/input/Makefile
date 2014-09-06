# see http://www.micahcarrick.com/tutorials/avr-microcontroller-tutorial/getting-started.html

input.hex: input.c
	avr-gcc -mmcu=atmega328p -Wall -Os -o input.elf input.c
	avr-objcopy -j .text -j .data -O ihex input.elf input.hex

prog:
	avrdude -p m328p -c usbasp -e -U flash:w:input.hex -U lfuse:w:0xFF:m -U hfuse:w:0xD9:m -U efuse:w:0x06:m
#	avrdude -p m328p -c usbasp -e -U flash:w:input.hex -U lfuse:w:0xFF:m -U hfuse:w:0xDE:m -U efuse:w:0x05:m
