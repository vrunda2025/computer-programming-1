#include<stdio.h>
int main()
{
     int n,i,sum=0;
    printf("enter a value");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    
      
        {
        
             sum+=(2*i);
        }
        
    
     printf("\nsum of first %d even numbers...%d",n,sum);
    
    return 0;
}