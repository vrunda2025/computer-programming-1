#include<stdio.h>
void main()
{
    int a[100],i,m,n;
    printf("\nEnter number of elements: ");
    scanf("%d",&m);
    printf("\nEnter %d elements : ",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter a number to insert : ");
    scanf("%d",&n);

    a[m]=n;
    m++;
     printf("\nArray after inserting : ");
     for(i=0;i<m;i++)
     {
         printf("%d\t",a[i]);
     }

}
