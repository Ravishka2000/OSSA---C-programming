#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void * evenNums(int x)
{
  int i=2;
  while(i < x)
  {
    printf("%d ",i);
    i += 2;
  }
  printf("\n\n");
  
}

void * oddNums(int y)
{
  int i=1;
  while(i < y)
  {
    printf("%d ",i);
    i += 2;
  }
  printf("\n\n");
  
}

int main(void) 
{

  pthread_t tid1;
  pthread_t tid2;

  pthread_create(&tid1,NULL,(void *)evenNums,(void *)101);
  pthread_create(&tid2,NULL,(void *)oddNums,(void *)100);

  pthread_join(tid1,NULL);
  pthread_join(tid2,NULL);

  return 0;
}
