#include<stdio.h>
void main()
{
    int i,n,sum=0;
    float m;
    printf("enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\nsum of %d nos. %d",n,sum);

m=sum/n;
 printf("\nmean : %d",m);
}