#include<stdio.h>
void main()
{
    int a[5],i;
    printf("\nEnter 5 elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nReverse array : ");
    for(i=4;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}