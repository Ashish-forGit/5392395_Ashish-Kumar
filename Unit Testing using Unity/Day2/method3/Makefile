# creating your own variable

SRC = main.c sum.c square.c
OBJC = main.o  sum.o square.o


object.o : ${SRC}
	gcc $^ -c 
	

all : ${OBJC}
	gcc $^ -o $@

run : all
	./all

clean:
	rm -f *.o *.out all

# Special variables
# 1. $^: consider all the files present in the dependencies
# 2. $@: Representing the target name / evaluates to all (executabl file being generated)
# 3. $<: consider only first file in the dependencies

