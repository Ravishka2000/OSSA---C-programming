#include<stdio.h>
#include<stdlib.h>

int main()
{
  int pid = fork();

  if(pid == 0)
  {
    printf("\n\nThis is Child Process");
    printf("\nMy ID : %d",getpid());
    printf("\nParent Process ID : %d",getppid());
  }
  else 
  {
    printf("\nThis is Parent Process");
    printf("\nMy ID : %d",getpid());
  }
}
