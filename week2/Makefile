CC = clang
CFLAGS = -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Wshadow
LDLIBS = -lcs50 -lm

scrabble: scrabble.c
	$(CC) $(CFLAGS) scrabble.c -o scrabble $(LDLIBS)
