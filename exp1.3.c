#include<stdio.h>
int main()
{
    int a[50],n,i,temp,j;
    printf("\nEnter number of elements in an array :");
    scanf("%d",&n);
    printf("Enter elements of an array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {if(a[i]>a[j])
        { temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }}
    }
    for(i=0;i<n;i++)
    {printf("\t%d",a[i]);}
    printf("\nMaximun : %d",a[n-1]);
    printf("\nMinimum : %d",a[0]);
    printf("\nSecond Largest : %d",a[n-2]);
    printf("\nSecond smallest : %d",a[1]);
    return 0;
}