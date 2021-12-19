CC = gcc	
FLAGS = -Wall -g
AR = ar
all: help.a help.o AlgoTask3.a AlgoTask3.o main.o mains

mains: main.o help.a
	$(CC) $(FLAGS) -o mains.o help.o main.o help.a

help.a: help.o
	$(AR) -rcs help.a help.o

AlgoTask3.a: AlgoTask3.o	
	$(AR) -rcs AlgoTask3.a AlgoTask3.o

main.o: main.c value.h
	$(CC) $(FLAGS) -c main.c
	
help.o: help.c value.h
	$(CC) $(FLAGS) -c help.c

AlgoTask3.o: AlgoTask3.c value.h
	$(CC) $(FLAGS) -c AlgoTask3.c
		
.PHONY: clean
clean:
	rm -f *.o *.a  $(Prog)
	




	

	
