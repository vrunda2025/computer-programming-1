#include<stdio.h>
int main()
{
    int i=0,n;
    printf("enter a value");
    scanf("%d",&n);

    while(i<n)
    {
        i++;
        printf("\n%d",i);
    }
    return 0;
}