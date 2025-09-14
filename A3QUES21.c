#include<stdio.h>
void main()
{
    int n,d;
    printf("enter any three digit number : ");
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
            printf("%d\t",d);
            n=n/10;
        }
    }
}