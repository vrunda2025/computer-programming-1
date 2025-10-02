#include<stdio.h>
void main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,3},i,n,temp=0;
   printf("Enter position to shift : ");
   scanf("%d",&n);
   temp=a[0];
   for(i=0;i<10;i++)
   {
    a[i]=a[i+n];
    a[10-n]=temp;
   }
   printf("\nAfter shifting to left : ");
   for(i=0;i<10;i++)
   {
    printf("%d\t",a[i]);
   }       
}