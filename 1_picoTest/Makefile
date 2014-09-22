CC=gcc
CFLAGS=-Iinclude/ -L./lib/ -lpicotcp

.PHONY: clean
all: picoTest
picoTest: main.o
	$(CC) -o picoTest $^ $(CFLAGS)
clean:
	rm -f picoTest *.o
