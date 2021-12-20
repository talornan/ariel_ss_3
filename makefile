CC = gcc	
FLAGS = -Wall -g
AR = ar

all: stringProg

stringProg: main.o  lib.a
	$(CC) $(FLAGS) -o stringProg main.o lib.a


main.o: main.c value.h
	$(CC) $(FLAGS) -c main.c
	
lib.a:AlgoTask3.o
	ar -rcs lib.a AlgoTask3.o

AlgoTask3.o: AlgoTask3.c value.h
	$(CC) $(FLAGS) -c AlgoTask3.c
		
.PHONY: clean
clean:
	rm -f *.o *.a  stringProg

run:
	./stringProg
	




	

	
