//array of pointers
#include<stdio.h>
void main()
{
    int a[5]={2,4,5,8,1},*ptr,i;
    ptr=&a[0];
    for(i=0;i<5;i++)
    {
        printf("\na[%d] : %d",i,*ptr);
        ptr++;
    }

}
