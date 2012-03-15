# executable files for this directory
OBJECTS = statmem.exe QueueMain.exe QueueMain2.exe QueueMain3.exe \
	  typeid.exe dyn_cast.exe vec.exe vec-opnew.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# additional dependencies or rules follow --
# see makefile for chapter 2 for additional explanation if needed
QueueMain.exe: QueueMain.cc Queue.h Queue.cc
QueueMain2.exe: QueueMain2.cc Queue.h Queue.cc
QueueMain3.exe: QueueMain3.cc Queue.h Queue.cc

