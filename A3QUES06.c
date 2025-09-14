#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a value");
    scanf("%d",&n);

    for(i=1;i<n;i=i+1)
    {
        printf("\n%d",2*i);
    }
    return 0;
}