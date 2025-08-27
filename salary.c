#include<stdio.h>
void main()
{
    int g,a,d,s;
    printf("enter gross salary: ");
    scanf("%d",&g);
     
    a=g*0.1;
    printf("\nallowance :%d",a);
    d=g*0.03;
    printf("\ndeduction :%d",d);

    s=g+a-d;
    printf("\nnet salary : %d",s);

}
