#include<stdio.h>
int main()
{
    int a[4][4],i,j,b[4][4];
    printf("\nEnter elements of array : ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nTranspose matrix : ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        b[i][j]=a[j][i];
        printf("%d\t",b[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}