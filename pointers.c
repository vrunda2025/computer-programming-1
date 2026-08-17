//pointers to array
#include<stdio.h>
void main()
{
    int a[5]={2,4,5,3,7},(*ptr)[5],i;
    ptr=&a;
    for(i=0;i<5;i++)
    {
        printf("\na[%d] : %d",i,(*ptr)[i]);
        
    }
    
}