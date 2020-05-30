CC=gcc
CFLAGS=-ansi -pedantic -Wall -I.

.PHONY: compile producer consumer clean

compile: consumer.x

consumer: consumer.x
	./consumer.x
consumer.x: consumer.o elevator_calls.o
	$(CC) $(CFLAGS) -o consumer.x consumer.o elevator_calls.o
consumer.o: consumer.c elevator_calls.h
	$(CC) $(CFLAGS) -o consumer.o -c consumer.c

elevator_calls.o: elevator_calls.c elevator_calls.h
	$(CC) $(CFLAGS) -o elevator_calls.o -c elevator_calls.c

clean:
	rm -f *.x *.o
