#include<stdio.h>
void main()
{
    char name[100],n;
    int i,freq=0;
    printf("\nEnter name : ");
    gets(name);
    printf("\nEnter character to find frequency : ");
    scanf("%c",&n);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]==n)
        {
            freq++;
        }
    }
printf("\nfrequency of %c : %d",n,freq);
}