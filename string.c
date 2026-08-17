#include<stdio.h>
void main()
{
    char name[]="vrunda", rev[7];
    int i , count=0,n;

    for(i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of a string :%d",count);

    n=count--;
    for(i=0;i<n;i++)
    {
        rev[i]=name[count--];
    }
    rev[i]='\0';
    printf("\nReverse string : %s",rev);
}
