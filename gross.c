#include<stdio.h>
int main()
{
    int g,a,d,s;
    printf("enter gross salary: ");
    scanf("%d",&g);
     
     if(g>10000)
     {
    a=g*0.1;
    printf("\nallowance :%d",a);
    d=g*0.03;
    printf("\ndeduction :%d",d);

    s=g+a-d;
    printf("\nnet salary : %d",s);
     }
     else 
     if(g>5000)
    { a=g*0.07;
    printf("\nallowance :%d",a);
    d=g*0.02;
    printf("\ndeduction :%d",d);

    s=g+a-d;
    printf("\nnet salary : %d",s);
     }
     else
     {
        printf("\n invalid");
     }
     return 0;
      
}