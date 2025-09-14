#include<stdio.h>
void main()
{
    int count=0,n;
      printf("enter any number :  ");
  scanf("%d",n);
  if(n==0)
  {
    printf("count: 0");
  }
  else
 { 
     while(n!=0)
  {
    n=n/10;
    count++;
  }
}
  printf("number of digits : %d\n",count);
}