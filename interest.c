#include<stdio.h>
void main()
{
    float i,p,r,n;
    printf("enter p,r,n....");
    scanf("%f%f%f",&p,&r,&n);

    i=p*r*n/100;
    printf("interest : %f",i);
}