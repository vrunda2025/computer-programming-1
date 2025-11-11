#include<stdio.h>
void main()
{
    char str[100],rev[100];
    int len=0,n,i;
    printf("\nEnter name : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    { 
        len++;
    }
    n=len--;
    for(i=0;i<n;i++)
    
    {
        rev[i]= str[len--];

    }
    rev[i]='\0';
    printf("\nREVERSE : %s",rev);

}