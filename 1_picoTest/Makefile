CC=gcc
CFLAGS=-Iinclude/ -L./lib/ -lpicotcp

all: main.o
	$(CC) -o picoTest main.c $(CFLAGS)

clean:
	rm -f picoTest *.o
