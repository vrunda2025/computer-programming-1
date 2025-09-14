#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
{
    if(i%13==0)
    {
        sum=sum+i; 
    }
    
}
printf("sum of nos. divisibe by 13 : %d",sum);

    
}