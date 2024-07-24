CC = clang
CFLAGS = -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Wshadow
LDLIBS = -lcs50 -lm

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello $(LDLIBS)

compare: compare.c
	$(CC) $(CFLAGS) compare.c -o compare $(LDLIBS)


agree: agree.c
	$(CC) $(CFLAGS) agree.c -o agree $(LDLIBS)


loop: loop.c
	$(CC) $(CFLAGS) loop.c -o loop $(LDLIBS)


calc: calc.c
	$(CC) $(CFLAGS) calc.c -o calc $(LDLIBS)


p1: p1.c
	$(CC) $(CFLAGS) p1.c -o p1 $(LDLIBS)


mario: mario.c
	$(CC) $(CFLAGS) mario.c -o mario $(LDLIBS)

credit: credit.c
	$(CC) $(CFLAGS) credit.c -o credit $(LDLIBS)