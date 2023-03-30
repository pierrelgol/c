CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11 -O2

all: $(patsubst %.c,%.out,$(wildcard *.c))

%.out: %.c
	$(CC) $(CFLAGS) $< -o $@

.PHONY: run clean

run: all
	./$(patsubst %.c,%.out,$(filter %.out,$(MAKECMDGOALS)))

clean:
	rm -f *.out

