#include<stdio.h>
void main()
{
    int n,sum=0;
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
            sum=(sum*10)+(n%10);
            n=n/10;
        }
    }
    printf("REVERSE : %d",sum);
    
}