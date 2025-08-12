object.o: def.c test.c unity.c
	gcc $^ -c

all: def.o test.o unity.o 
	gcc $^ -o all

run : all
	./all

clean:
	del *.o *.exe