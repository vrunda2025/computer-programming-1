#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("Enter 5 elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter a number to insert : ");
    scanf("%d",&n);

    for(i=5;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=n;
     printf("\nArray after inserting : ");
     for(i=0;i<=5;i++)
     {
         printf("%d\t",a[i]);
     }

}
