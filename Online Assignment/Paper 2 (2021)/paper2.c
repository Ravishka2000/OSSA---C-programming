#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define No_thread 2

void * thread1(int x)
{
    int n = 2;
    while (n<x)
    {
      printf("%d ",n);
      n += 2;
    }
  printf("\n");
}

int main()
{
  pthread_t tid[No_thread];

  int num;

  printf("Enter a Number : ");
  scanf("%d",&num);

  for(int i = 0 ; i < No_thread ; ++i)
  {
      pthread_create(&tid[i],NULL,(void * )thread1,(void * )101);
      printf("\n");
  }

  for(int i = 0 ; i <= num ; ++i)
  {
      printf("%d ",i);
  }

  printf("\n");

  for(int i = 0 ; i < No_thread ; ++i)
  {
      pthread_join(tid[i],NULL);
  }
  
  return 0;
}
