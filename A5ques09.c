#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    int i,len=0;
    printf("\nEnter string 1 : ");
    gets(str1);
    printf("\nEnter string 2 : ");
    gets(str2);
     for(i=0;str1[i]!='\0';i++)
     {
        len++;
     }
     str1[len++]=' ';
     for(i=0;str2[i]!='\0';i++)
     {
        str1[len++]=str2[i];
     }
     str1[len]='\0';
     printf("concate string : %s",str1);
}