#include<stdio.h>
void main()
{
    int i,p=1,c=0,n,num;
    printf("How many nos. ?");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        n=p+c;
        printf("\t%d",n);
        p=c;
        c=n;
    }
}