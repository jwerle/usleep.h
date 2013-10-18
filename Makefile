
all: clean test

clean:
	rm -f usleep-test

test:
	$(CC) test.c -DUSE_POLL=1 -std=c99 -o usleep-test
	./usleep-test

.PHONY: all clean test
