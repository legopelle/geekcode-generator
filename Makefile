CC = gcc
CFLAGS = -Wall -g
DEPS = primes.h
OBJ = main.o gfields.o


geekgen: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f geekgen *.o *~

run: geekgen
	./geekgen
