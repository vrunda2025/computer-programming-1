#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("\nEnter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("\nArray after deletion : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
