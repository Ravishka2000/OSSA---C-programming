#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * squareNumbers(int x)
{
  int i=1,sq=1;

  printf("\n\nSquare Numbers from 1 to %d :\n",x);
  
  while(sq < x)
  {
    printf("%d ",sq);
    i+=1;
    sq = i*i;    
  } 
}

void * cubicNumbers(int x)
{
  int i=1,cu=1;

  printf("\n\nCubic Numbers from 1 to %d :\n",x);
  
  while(cu < x)
  {
    printf("%d ",cu);
    i+=1;
    cu = (i*(i+1))/2;    
  } 
}

int main(void) 
{

  pthread_t tid1,tid2;

  pthread_create(&tid1,NULL,(void *)squareNumbers,(void *)101);
  pthread_create(&tid2,NULL,(void *)cubicNumbers,(void *)101);
  
  pthread_join(tid1,NULL);

  return 0;
  
}
