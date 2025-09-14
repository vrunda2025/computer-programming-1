#include<stdio.h>
int main()
{
    int i,n,count_0=0,count_n=0,count_p=0,num;
    printf("enter  number of value you want to input:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    printf("\nenter value of you choice : ");
    scanf("%d",&num);
    
    if(n>0)
      {
        count_p++;
      }
    else if(n<0)
    {
        count_n++;
    }
    else if(n==0)
    {
        count_0++;
    }
}
   printf("\ncount:");
   printf("\npositive numbers: %d",count_p);
   printf("\nnegative numbers: %d",count_n);
   printf("\nzeroes: %d",count_0);
   return 0;
}