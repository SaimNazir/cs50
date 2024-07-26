CC = clang
CFLAGS = -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Wshadow
LDLIBS = -lcs50 -lm

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello $(LDLIBS)
