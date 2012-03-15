# executable files for this directory
OBJECTS = inserters.exe use-istream-iter.exe \
	  equiv-istream-iter.exe \
	  scores.exe rev-iters.exe innerprod.exe \
	  use_find.exe vocab.exe elim-dups.exe \
	  use_equalrange.exe iostream_iter.exe \
	  use-ostream-iter.exe reverse-iter.exe \
	  count-size.exe arrow.exe parms.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# one or more files in this directory includes a header
# defined in chapter 1
LOCFLAGS=-I ../1

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
count-size.exe: count-size.o ../7/mk_plural2.o
	$(CC) $(CCFLAGS) count-size.o \
	                       ../7/mk_plural2.o -o count-size.exe

vocab.exe: vocab.o ../8/get_openfile.o ../7/mk_plural2.o
	$(CC) $(CCFLAGS) vocab.o ../8/get_openfile.o ../7/mk_plural2.o \
                                -o vocab.exe

