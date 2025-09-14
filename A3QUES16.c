#include<stdio.h>
void main()
{
    int i=0,max=1,min=0;
    while(i<100)
    {
        i++;
        printf("\t%d",i);
    }
    if(i>max)
       {max=i;
       printf("\nmax =%d",max);
       }
    else
    {
        printf("\nmin = %d",min);
    }   

}