#include<stdio.h>
void main()
{
    int i,j,temp,sum=0;
   
    for(i=2;i<500;i++)

    {
        temp=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            temp=1;
            
        }
    
        if(temp==0)
        {
            printf("%d\t",i);
            sum=sum+i;
        }
    }
    printf("\nsum= %d",sum);

   
}
