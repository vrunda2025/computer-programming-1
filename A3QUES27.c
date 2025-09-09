#include<stdio.h>
void main()
{
    int n,i,x;
    printf("enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       n=n/i;
    }
    printf("\n factors  : %d",n);
}
