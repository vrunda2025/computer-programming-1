#include<stdio.h>
void main()
{

int a[3][3],b[3][3],c[3][3],i,j;
printf("\nEnter Matrix A :");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

printf("\nEnter Matrix B :");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
        c[i][j]=a[i][j]+b[i][j];
    }
}

printf("\nAddition of two Matices :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",c[i][j]);
    }
   printf("\n"); 
}
}