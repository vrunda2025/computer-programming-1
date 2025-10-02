#include<stdio.h>
void main()
{
    int a[10],freq=0,i,n;
    printf("\nEnter 10 elements : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter number to find frequency : ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
          freq++;
    }
    printf("\nFrequency of %d : %d",n,freq);
}