#include<stdio.h>
void swap(int *p,int*q);
void main()
{
    int a=2,b=3;
    printf("\nBefore Swapping a:%d b:%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping a:%d b:%d",a, b);
}
void swap(int*p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}