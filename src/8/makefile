# executable files for this directory
OBJECTS = manips.exe prec.exe point.exe sci_dec.exe \
	  buf.exe setw.exe seek.exe  sstream.exe \
	  use-getopen.exe main-proto.exe badgetc.exe \
	  skipws.exe no-skipws.exe getput.exe getc.exe \

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
main-proto.exe: main-proto.o get_openfile.o
	$(CC) $(CCFLAGS) main-proto.o get_openfile.o \
	               -o main-proto.exe

use-getopen.exe: use-getopen.o get_openfile.o
	$(CC) $(CCFLAGS) use-getopen.o get_openfile.o \
	               -o use-getopen.exe
