# target name : dependencies
# <tab> commands to generate target

object.o : main.c demo.h sum.c square.c
	gcc $^ -c 


all : main.o sum.o square.o
	gcc $^ -o $@

run : all.out
	./all.out

clean :
	rm -f *.o *.out all

# Special variables
# 1. $^: consider all the files present in the dependencies
# 2. $@: Representing the target name / evaluates to all (executabl file being generated)
# 3. $<: consider only first file in the dependencies

