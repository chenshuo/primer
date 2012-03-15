# executable files for this directory
OBJECTS = use-handle.exe book.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
# MS compiler does not appear to handle try blocks on 
# template constructors
use-handle.o: MS_Handle.h

Sales_item.o book.o: Sales_item.h
book.exe: Sales_item.o book.o 
	$(CC) $(CCFLAGS) book.o Sales_item.o -o book.exe
