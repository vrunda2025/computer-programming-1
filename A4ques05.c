#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("\nEnter elements of a : ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);

    }
    printf("\nEnter elements of b : " );
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",b[i][j]);
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("\nSum of array : ");
    for(i=0;i<2;i++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}