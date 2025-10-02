#include<stdio.h>
void main()
{
    int a[5],i,n,temp=0;
    printf("\nEnter value of 5 elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter value to search : ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n==a[i])
            temp=1;
    }
    if(temp==1)
    {
        printf("\nFound");
    }
    else
        printf("\nNot Found");
}