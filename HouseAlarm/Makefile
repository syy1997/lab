CC=gcc
CFLAGS=-lWarn -pedantic

tester: tester.o libmyifttt.a
	cc tester.o -L. -lmyifttt -lcurl -o tester
	
output:irtester.o libmyifttt.a
        $(CC) irtester.o -L. -lwiringPi -lmyifttt -lcurl -o irtester

irtester.o: irtester.c ifttt.h
        $(CC) $(CFLAGS) -c ansi $<

irtester: irtester.o 
	cc irtester.o -lwiringPi -o irtester

blink: blink.o 
	cc blink.o -lwiringPi -o blink

button: button.o 
	cc button.o -lwiringPi -o button

libmyifttt.a:	ifttt.o
	ar -rcs libmyifttt.a ifttt.o

ifttt.o: 	ifttt.c ifttt.h
	$(CC) $(CFLAGS) -c -ansi $<

tester.o:	tester.c ifttt.h
	$(CC) $(CFLAGS) -c -ansi $<

all:	tester irtester blink button

clean:
	rm tester irtester *.o
