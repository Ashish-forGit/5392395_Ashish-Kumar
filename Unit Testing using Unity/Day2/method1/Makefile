# target name : dependencies
# <tab> commands to generate target

object.o : main.c demo.h sum.c square.c
	gcc main.c sum.c square.c -c 

all : main.o demo.h sum.c square.c
	gcc main.o sum.o square.o -o all.out 

run : all.out
	./all.out

clean :
	rm -rf *.o *.out


