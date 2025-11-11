#include<stdio.h>
int main()
{
    char name[100];
    int i;
    printf("\nEnter name in lowercase : ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        name[i]=name[i]-32;
        
    }
    printf("\nuppercase = %s",name);

    
        return 0;   

}