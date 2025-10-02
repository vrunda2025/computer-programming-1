#include<stdio.h>
void main()
{
    int a[5],i,j,temp;
    printf("\nEnter 5 elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<4;i++)
{
        for(j=i+1;j<5;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
        
    }
 }
    printf("\nSorted Array : \n");
    for(i=0;i<5;i++)
    {
        printf("\na[%d] : %d",i,a[i]);
    }
    
}