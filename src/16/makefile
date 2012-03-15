# executable files for this directory
OBJECTS = QueueMain.exe QueueMain2.exe QueueMain3.exe \
	  newQueueMain.exe newQueueMain2.exe newQueueMain3.exe \
	  char_main.exe char_main_push.exe \
	  Queue-assign.exe  use-handle.exe Basket_main.exe \
	  spcl-max.exe compare.exe \
	  overcomp.exe overcomp2.exe nontype.exe swap.exe \
	  use-query-handle.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# one or more files in this directory includes a header
# defined in chapter 10
LOCFLAGS = -I. -I../1 -I../10

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
QueueMain.exe: QueueMain.cc Queue.h Queue.cc
QueueMain2.exe: QueueMain2.cc Queue.h Queue.cc
QueueMain3.exe: QueueMain3.cc Queue.h Queue.cc

#newQueue.h implements same Queue interface but builds it on top of std::list
newQueueMain.exe: newQueue.h
newQueueMain2.exe: newQueue.h
newQueueMain3.exe: newQueue.h 
use-handle.exe: use-handle.o Handle.h
Query.o: Query.cc Query.h 
Basket.o Basket_main.o: Basket.h

# version that specializes entire class
char_main.exe: char_queue.h char_queue.o Queue.h Queue.cc char_main.o
	$(CC) $(CCFLAGS) char_main.o char_queue.o -o char_main.exe

# version that specializes just the push function
char_main_push.exe: Queue.h Queue.cc char_main_push.o queue_push_char.o
	$(CC) $(CCFLAGS) char_main_push.o queue_push_char.o \
	             -o char_main_push.exe

use-query-handle.exe: use-query-handle.o Handle.h Query.h Query.o  \
	             ../8/get_openfile.o \
	             ../10/TextQuery.h ../15/get_print.o
	$(CC) $(CCFLAGS) Query.o use-query-handle.o \
	            ../8/get_openfile.o \
	            ../15/get_print.o ../10/TextQuery.o \
	                 -o use-query-handle.exe

Basket_main.exe: Basket_main.o Basket.o
	$(CC) $(CCFLAGS) Basket_main.o Basket.o -o Basket_main.exe

