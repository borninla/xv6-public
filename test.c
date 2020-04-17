#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[])
{
  printf(0, "# of processes currently running: %d\n", info(1));
  printf(0, "# of syscalls made by this process: %d\n", info(2));
  printf(0, "# of memory pages used by this process: %d\n", info(3));
  exit();
}
