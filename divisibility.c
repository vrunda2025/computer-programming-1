#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    if(n%7==0)
    {
        printf("\n divisible");
    }
    else
    {
        printf("\n not divisible");

    }
    return 0;
}