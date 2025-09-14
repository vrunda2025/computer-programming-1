#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter n : ");
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    { 
      
        if(n%i==0)
        {
           sum=sum+i; 

        }
        
    }
    printf("sum : %d",sum);

     if(sum==n)
     {
        printf("\nperfect no.");
     }
     else
     {
        printf("\nnot perfect no.");
     }

    
    

}