#include<stdio.h>
void main()
{
    float c,f;
    printf("enter farenheit...");
    scanf("%f", &f);

    c=9/5*(f-32);
    printf("celcius : %f",c);
}