object.o : leapyear.c unity.c leap_test.c
	gcc $^ -c

all: leap_test.o leapyear.o unity.o 
	gcc $^ -o all

run: all
	./all

clean:
	del /Q *.o all.exe
