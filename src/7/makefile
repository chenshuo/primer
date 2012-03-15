# executable files for this directory
OBJECTS = swapmain1.exe swapmain2.exe enum-match.exe conv-enums.exe \
	  vecprintmain.exe rgcd.exe fact.exe useptrswap.exe \
	  ref-fcn.exe cfcn_ex.exe \
	  count-calls.exe pow_main.exe mk_plural.exe \
	  good_printmain.exe stl-arr-fcns.exe refret-ex.exe \
	  usefcnptr.exe mainret.exe inline_shorter.exe \
	  useptrparms.exe vec-parms.exe mainmath.exe mk_plural2.o

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
cfcn_ex.exe: cfcn_ex.c
	gcc cfcn_ex.c -o cfcn_ex.exe

swapmain1.exe: badswap.o decl1.h swapmain1.o swapmain.pgm
	$(CC) $(CCFLAGS) swapmain1.o badswap.o -o swapmain1.exe

swapmain2.exe: swap.o decl2.h swapmain2.o swapmain.pgm
	$(CC) $(CCFLAGS) swapmain2.o swap.o -o swapmain2.exe

mainmath.exe: mathstuff.o mainmath.o localMath.h
	$(CC) $(CCFLAGS) mainmath.o mathstuff.o -o mainmath.exe

vecprintmain.exe: vecprintmain.o vecprint.o
	$(CC) $(CCFLAGS) vecprintmain.cc vecprint.o \
	                                  -o vecprintmain.exe

pow_main.exe: pow_fcn.o pow_main.o
	$(CC) $(CCFLAGS) pow_main.o pow_fcn.o -o pow_main.exe

mk_plural2.o: mk_plural2.cc
	$(CC) $(CCFLAGS) -c mk_plural2.cc -o mk_plural2.o
