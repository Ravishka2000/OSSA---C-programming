#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int pid = fork();

  if(pid == 0)
  {
    printf("Child's Parent ID : %d",getppid());
    
  }
  else
  {
    sleep(100); //creating zombie process
  }
}
