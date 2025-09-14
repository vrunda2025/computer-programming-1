#include<stdio.h>
void main()
{
    int i,sum=0;
    float m;
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
    }
    printf("\nsum of ten nos. %d",sum);

m=sum/10;
 printf("\nmean : %d",m);
}