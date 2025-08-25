#include<stdio.h>
void main()
{
    float d , r , p;
    printf("enter dollars");
    scanf("%f", &d);

    r=d*48;
    printf("RUPEES : %f",r);

    p=r*70;
    printf("\nPOUNDS: %f",p);
}