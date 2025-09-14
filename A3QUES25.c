#include<stdio.h>
void main()
{
    int n,sum=0,x;
    printf("enter any   number : ");
    scanf("%d",&n);
    x=n;
    if(n==0)
    {
        printf("0\n");
    }
    else
    {
        while(n>0)
        {
            sum=(sum*10)+(n%10);
            n=n/10;
        }
    }
        if(x==sum)
        {
            printf("\nIT IS PALLINDROME");
        }
        else
        {
            printf("\nIT IS NOT PALLINDROME");
        }
}