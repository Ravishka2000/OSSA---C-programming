#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {
  int pid;

  pid=fork();
  if(pid == 0)
  {
    printf("Child's Parent ID : %d",getppid());
    sleep(50);
  }
 
}
