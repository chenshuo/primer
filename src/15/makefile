# executable files for this directory
OBJECTS = Basket_main.exe scope.exe V2_Basket_main.exe \
	  bsk2.exe Query.exe main4.exe main5.exe 

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# one or more files in this directory includes a header
# defined in chapter 10
LOCFLAGS = -I../10

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
bsk2.exe: Basket.o bsk2.o
	$(CC) $(CCFLAGS) bsk2.o Basket.o -o bsk2.exe

V2_Basket_main.cc V2_Basket.cc: Basket2.h Basket_main.cc Basket.cc mk_basket2
	mk_basket2

V2_Basket_main.exe: V2_Basket_main.o V2_Basket.o
	$(CC) $(CCFLAGS) V2_Basket_main.o V2_Basket.o \
	                 -o V2_Basket_main.exe

Query.o querymain.o main4.o main5.o: Query.h
Basket.o Basket_main.o: Basket.h

Basket_main.exe: Basket_main.o Basket.o
	$(CC) $(CCFLAGS) Basket_main.o Basket.o -o Basket_main.exe

get_print.o ../10/TextQuery.o: ../10/TextQuery.h 


main5.exe: Query.o main5.o Query.h ../10/TextQuery.h ../10/TextQuery.o \
		get_print.o  ../8/get_openfile.o
	$(CC) $(CCFLAGS) main5.o Query.o \
	        ../10/TextQuery.o get_print.o \
		../8/get_openfile.o -o main5.exe

main4.exe: Query.o main4.o Query.h ../10/TextQuery.h ../10/TextQuery.o \
		get_print.o ../8/get_openfile.o
	$(CC) $(CCFLAGS) main4.o Query.o \
	        ../10/TextQuery.o get_print.o \
		../8/get_openfile.o  -o main4.exe

Query.exe: Query.o querymain.o Query.h ../10/TextQuery.h \
		../10/TextQuery.o get_print.o ../8/get_openfile.o
	$(CC) $(CCFLAGS) querymain.o Query.o \
	        ../10/TextQuery.o get_print.o \
		../8/get_openfile.o -o Query.exe

