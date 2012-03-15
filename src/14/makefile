# executable files for this directory
OBJECTS = subscript.exe absInt.exe fcnobj.exe directcall.exe \
	  use_chckPtr.exe count-size.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# one or more files in this directory includes a header
# defined in chapter 11 or 12
LOCFLAGS = -I../11 -I../12

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
use_chckPtr.o CheckedPtr.o: CheckedPtr.h

use_chckPtr.exe: use_chckPtr.o CheckedPtr.o
	$(CC) $(CCFLAGS) use_chckPtr.o CheckedPtr.o -o use_chckPtr.exe

directcall.exe: directcall.o Sales_item.o
	$(CC) $(CCFLAGS) directcall.o Sales_item.o -o directcall.exe

