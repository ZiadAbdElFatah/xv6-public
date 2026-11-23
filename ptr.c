#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  char *p = (char *) atoi(argv[1]);
  int n = (argc > 2) ? atoi(argv[2]) : 5;   // optional length, default 5
  int r = write(1, p, n);
  printf(1, "\nwrite returned %d\n", r);
  exit();
}