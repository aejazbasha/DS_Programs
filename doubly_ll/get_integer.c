#include <ctype.h>
#include <stdio.h>
#include "color.h"
static void clear_stream(FILE *in)
{
    int ch;
    clearerr(in);
    do
        ch = getc(in);
    while (ch != '\n' && ch != EOF);
    clearerr(in);
}

int get_integer()
{
  int value;

  fflush(stdout);

  while (scanf("%d", &value) != 1) {
      clear_stream(stdin);
      printf("%sInvalid integer. Please try again: %s", red, none);
      fflush(stdout);
  }

  return value;
}
