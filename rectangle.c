#include<stdio.h>
void main()
{
    int l,b,p,a;
    printf ("enter l,b...");
    scanf("%d%d",&l,&b);

    a=l*b;
    printf("\narea : %d",a);
    p=2*(l+b);
    printf("\nperimeter : %d",p);
}