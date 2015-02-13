CC=gcc
CFLAGS=-Wall -g

geekgen: gg.o
	$(CC) $(CFLAGS) -o geekgen gg.o

helloworld.o: gg.c
	$(CC) $(CFLAGS) -o gg.o -c gg.c

clean:
	rm -f geekgen *.o *~

run: helloworld
	./geekgen
