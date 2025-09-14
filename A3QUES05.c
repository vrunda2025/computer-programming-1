#include<stdio.h>
int main()
{
    int i=0,n;
    printf("enter a value");
    scanf("%d",&n);

    while(i<n)
    {
        i++;
        printf("\n%d",2*i-1);
    }
    return 0;

}