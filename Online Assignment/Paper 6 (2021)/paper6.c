#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void * thread1(int x)
{
  int i = 1,num=1;
  
  printf("\n\nThread prints triangular Numbers less than %d \n",x);
  
  while(num <= x)
  {
      printf("%d ",num);
      i +=1;
      num = (i*(i+1))/2;
  }

  printf("\n");  
}

int main(void) 
{

  pthread_t tid1;
  int i = 0, cube = 1,nums=1;

  printf("Enter a Number : ");
  scanf("%d",&i);

  while(nums < i)
  {
    printf("%d ",nums);
    cube+=1;
    nums = (cube*(cube+1))/2;
  }
  
  pthread_create(&tid1,NULL,(void *)thread1,(void *)10);

  pthread_join(tid1,NULL);
    
  return 0;
  
}
