#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int n;
    printf("\nEnter string1 : ");
    gets(str1);
    printf("\nEnter string2 : ");
    gets(str2);
    
     n=strcmp(str1,str2);
    if(n==0)
      printf("\nBoth strings are equal");
      else if(n>0)
      printf("\n %s is greater than %s",str1,str2);
      else
      printf("\n%s is smaller than %s",str1,str2);
      


}