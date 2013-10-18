usleep.h
========

usleep implementation using poll() or select()

## install

```c
$ clib install jwerle/usleep.h
```

## usage

You need to define the constant `USE_POLL` or `USE_SELECT` in order for
usleep to determine which implementation to use. This can be done in
your source code or at compile time with the `-D` flag.

```c
$ CC program.c -DUSE_POLL=1 -std=c99 -o progam
```

## example

```c
usleep(10000);
```

## license

MIT
