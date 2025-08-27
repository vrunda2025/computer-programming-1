#include <stdio.h>
int main()
{
    float a,b,c,t,avg;
    printf("enter marks of 3 subjects...");
    scanf("%f%f%f",&a , &b , &c);

    t=a+b+c;
    printf("\ntotal : %f",t);
    avg=t/3;
    printf("\naverage : %f",avg);
    return 0;
}