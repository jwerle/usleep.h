#ifndef USLEEP_H
#define USLEEP_H 1

#ifdef USE_POLL
#include <poll.h>
#elif defined USE_SELECT
#include <sys/time.h>
#else
#error unable to implement usleep
#endif

int
usleep (unsigned int usec);

int
usleep (unsigned int usec) {
  int rc = 0;
#ifdef USE_POLL
  rc = poll(NULL, 0, usec / 1000);
#elif defined USE_SELECT
  struct timeval t;
  t.tv_sec = usec / 1000000;
  t.tv_usec = usec % 1000000;
  rc = select(0, NULL, NULL, NULL, &t);
#endif
  return rc;
}

#endif
