CFLAGS=-g -Wall -std=c99 -lm

TESTS=all 

all:
	gcc $(CFLAGS) test.c largest_two.s -o lt 


clean:
	rm -f $(TESTS)
