#include<stdio.h>
int main()
{
 int i,a[5];
 for(i=0;i<5;i++)
 {
   printf("\n enter number%d",i+1);
   scanf("\n%d",&a[i]);
 }

   for(i=0;i<5;i++)
   {


    printf("\n number %d : %d",i+1,a[i]);
   }
return 0;
}
