#make file for compiling programming led blinking  
# variables 
file=main
com=c
cc=avr-gcc
m=atmega328p
board=arduino
cflag=-c
oflag=-o
upl=avrdude
port=/dev/ttyACM0
outfile=led
Cpuflag= -DF_CPU=16000000UL 

compile:
		$(cc) $(file).$(com) -mmcu=$(m) $(cflag)
# this command will create .o files and compile c file and assembles but does not links
		#ignore the warning
		$(cc) $(Cpuflag) -mmcu=$(m) *.o  $(oflag) $(outfile).out 
#create final file  named main .out ..out
		
		avr-objcopy -O ihex -R .eeprom $(outfile).out $(file).hex
# converts the .out file to .hex file which is uploaded on the board
		 
program:
		sudo $(upl) -v -p $(m) -c $(board) -P $(port) -U flash:w:$(file).hex
# uploads the .hex file in mcu using avrdude software
clean:
		rm -rf *.o *.out *.hex
# deletes all the file 
