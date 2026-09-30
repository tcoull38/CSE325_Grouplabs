#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc != 3){
    fprintf(2, "usage: nice pid priority\n");
    exit(1);
  }
  if(set_priority(atoi(argv[1]), atoi(argv[2])) < 0){
    fprintf(2, "nice: no process with pid %s\n", argv[1]);
    exit(1);
  }
  exit(0);
}