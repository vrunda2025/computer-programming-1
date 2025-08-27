#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two values");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is largest",a);
        printf("\n%d is smallest",b);
    }
    else
    {
        printf("\n%d is largest",b);
        printf("\n%dis smallest",a);
    }
    return 0;
}