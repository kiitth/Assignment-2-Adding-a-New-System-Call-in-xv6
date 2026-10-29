#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(1, "Processing running: %d/n", getprocs());
  exit();
}

