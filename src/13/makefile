# executable files for this directory
OBJECTS = Foldermain.exe smart-ptr.exe value-ptr.exe \
	  plain-ptr.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
Folder.o Foldermain.o: Folder.h

Foldermain.exe: Folder.o Foldermain.o
	$(CC) $(CCFLAGS) Folder.o Foldermain.o -o Foldermain.exe
