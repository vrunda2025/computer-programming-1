#include <stdio.h>
int main ()
{
    int p,c,m,t;
    float a;
    printf("enter p,c,m");
    scanf("%d%d%d",&p,&c,&m);

    t=p+c+m;
    printf("total : %d",t);
    a=t/3;
    printf("average : %d",a);
    if((p<35)&&(c<35)&&(m<35))
    printf("\nfail");
    else
    if(a>=70)
    {
        printf("\ndistinction");
    }
     else
     if(a>=60)
     {
        printf("\nfirst");

     }
     else 
     if(a>=50)
     {
        printf("\nsecond");
     }
    else
    if(a>=35)
    {
        printf("\nthird");
    }
    return 0;
}
