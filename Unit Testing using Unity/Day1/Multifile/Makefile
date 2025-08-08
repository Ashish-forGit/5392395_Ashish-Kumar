# target name : dependencies
# <tab> commands to generate target

object.o : main.c demo.h sum.c square.c differ.c product.c divide.c
	gcc main.c sum.c square.c differ.c product.c divide.c -c 

all : main.o sum.o square.o differ.o product.o divide.o
	gcc main.o sum.o square.o differ.o product.o divide.o -o all

run : all
	./all

# clean :
# 	rm -f *.o *.out

clean:
	del /Q *.o *.exe 

