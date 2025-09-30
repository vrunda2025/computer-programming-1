#include<stdio.h>
void main()
{
    int a[100],i,m,n,p;
    printf("\nEnter number of elements: ");
    scanf("%d",&m);
    printf("\nEnter %d elements : ",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter a number to insert : ");
    scanf("%d",&n);
    printf("\nEnter position to insert : ");
    scanf("%d",&p);


    for(i=m;i>=p;i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=n;
     printf("\nArray after inserting : ");
     for(i=0;i<=m;i++)
     {
         printf("%d\t",a[i]);
     }

}
