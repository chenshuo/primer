# executable files for this directory
OBJECTS = pow2.exe pow2_try2.exe pow_tbl.exe twosome.exe \
	  scope_levels.exe ref-ex.exe scope_levels2.exe \
	  print_enum.exe print_enum2.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

# by default, make recompiles a source file any time it changes
# this rule says that decls2.cc should also be recompiled if
# the file ../1\Sales_item.h changes 
decls2.o: decls2.cc ../1\Sales_item.h

# rule to make pow_tbl.exe, which differs from the default rule
# in the makefile template.  pow_tbl must be linked with the
# pow_fcn.o file --- the code in pow_tbl.cc calls a function
# defined in pow_fcn.cc and so both files must be used to
# generate an executable
pow_tbl.exe: pow_tbl.o pow_fcn.o
	$(CC) $(CCFLAGS) pow_tbl.o pow_fcn.o -o pow_tbl.exe

