#include<stdio.h>
int main()
{
    char name[100];
    int i,length=0;
    printf("\nEnter name : ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        length++;
    }
    printf("\n%d",length);
    return 0;
    


}