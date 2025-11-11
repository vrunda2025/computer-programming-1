#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    int i;
    printf("\nEnter string1 : ");
    gets(str1);
    for(i=0;str1[i]!=0;i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("\nstring2 :%s",str2);
}