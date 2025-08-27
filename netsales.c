#include <stdio.h>
void main()
{
    int s,g,d;
    printf("enter gross sales : ");
    scanf("%d",g);

    d=g*0.1;
    printf("\ndiscount : %d",d);

    s=g-d;
    printf("\nnet sales : %d",s);

}