#include<stdio.h>
#include<stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{
  int pid = fork();

  if(pid == 0)
  {
    printf("\nChild Process ID : %d",getpid());
    printf("\nChild's Parent Process ID : %d",getppid());
  }
  else 
  {
    printf("\nParent Process ID : %d \n",getpid());
    wait(NULL);
  }
}
