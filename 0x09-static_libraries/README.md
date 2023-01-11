static libraries creation steps:


1. compile all library code into object codes without linking using .
	 $gcc -c -Wall -Werror -Wextra *.c
2. bundle all object files into one static library.. create an archive.
	$ar -rc libname.a *.o
3. create the index from the archive file
	$ranlib libname.a
	or
	$ar -rcs libname.a *.o
4. create final executable program
	$ gcc main.c -L. -lname -o main

