#include <stdio.h>
void main()
{
    int a, b, c, e, g ;
    float d;
    
    printf("enter a , b");
    scanf("%d %d",&a , &b);

    c=a+b;
    printf("\nSUM : %d",c);

    e=a-b;
    printf("\nDIFFERENCE : %d",e);

    g=a*b;
    printf("\nPRODUCT : %d",g);

    d=a/b;;
    printf("\nQUOTIENT : %f",d);


}