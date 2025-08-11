object.o: def.c main.c test.c unity.c
	gcc $^ -c

all: def.o main.o test.o unity.o
	gcc $^ -o all

run : all
	./all

clean:
	del *.o *.exe