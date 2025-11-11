#include<stdio.h>
int main()
{
    char name[100];
    int i;
    printf("\nEnter name in uppercase : ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        name[i]=name[i]+32;
        
    }
    printf("\nlowercase = %s",name);

        return 0;   

}