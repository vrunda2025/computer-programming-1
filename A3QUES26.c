#include<stdio.h>
void main()
{

    int n,r,x,m;
    printf("enter n : ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {

        r=n%10;
        x+=r*r*r;
        n=n/10;
    }
    if(x==m)
    {
        printf("it is an amstrong");
    }
    else
    {
        printf("it is not an amstrong");
    }


}


