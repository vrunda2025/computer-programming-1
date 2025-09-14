#include<stdio.h>
void main()
{
    int n,d,sum=0;
    printf("enter any   number : ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0\n");
    }
    else
    {
        while(n>0)
        {
            d=n%10;
           sum=sum+d;
            n=n/10;
        }

    }
    printf("\nsum of digits : %d",sum);
}