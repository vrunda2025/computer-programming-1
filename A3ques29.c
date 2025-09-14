#include<stdio.h>
void main()
{
    int i,n,temp=0;
    printf("enter n : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
           temp=1;

    }
    if(temp==1)
    {
        printf("\nnot prime");
    }
    else
    {
        printf("\nprime");
    }
}