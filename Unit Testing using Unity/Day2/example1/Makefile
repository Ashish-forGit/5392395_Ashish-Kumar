# target name : dependencies
# <tab> commands to generate target

object.o : main.c demo.h sum.c square.c unity.c
	gcc main.c sum.c square.c unity.c -c 

all: main.o sum.o square.o unity.o
	gcc $^ -o $@

run : all
	./all

clean :
	rm -f *.o *.out all.exe


