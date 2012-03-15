# executable files for this directory
OBJECTS = forcount.exe copy_array.exe wdebug.exe nodebug.exe \
	  vowels.exe othercnt.exe doWhile.exe exception_example.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# one or more files in this directory includes a header
# defined in chapter 1
LOCFLAGS = -I../1

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
wdebug.exe: wdebug.cc
	$(CC) $(CCFLAGS) wdebug.cc -o wdebug.exe

nodebug.exe: wdebug.cc
	$(CC) -D NDEBUG $(CCFLAGS) wdebug.cc -o nodebug.exe
