#ifndef TRIP_H
#define TRIP_H
#include <ncurses.h>
#include <stdint.h>
#include <string.h>
#include <stdint.h>

typedef struct TRIP
{
  const char *destination;
  const char *cost;
  const char *days;
} TRIP;

void add_trip (int64_t);

void summarize (int64_t rowid);

#endif
