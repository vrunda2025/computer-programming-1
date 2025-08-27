#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three values...");
    scanf("%d%d%d",&a,&b,&c);

    if((a>b)&&(a>c))
    {
        printf("\n%d is largest",a);
    }
       else  if((b>a)&&(b>c))
        {
            printf("\n%d is largest",b);
        }
    
    else
    {
        printf("\nc is largest",c);
    }
    return 0;
}