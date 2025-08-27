#include <stdio.h>
int main()
{
    int s,g,d;
    printf("enter gross sales : ");
    scanf("%d",g);

if(g>20000)
   { 
    d=g*0.15;
    printf("\ndiscount : %d",d);

    s=g-d;
    printf("\nnet sales : %d",s);
   }
   else 
   if(g>10000)
  {
     d=g*0.1;
    printf("\ndiscount : %d",d);

    s=g-d;
    printf("\nnet sales : %d",s);
  }
  else 
  {
    d=g*0.05;
    printf("\ndiscount : %d",d);

    s=g-d;
    printf("\nnet sales : %d",s);
  }
  return 0;
}