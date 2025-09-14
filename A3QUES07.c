#include<stdio.h>
int main()
{
     int n,i,sum=0;
    printf("enter a value");
    scanf("%d",&n);

    for(i=1;i<n;i=i+1)
    {
        sum+=i;
    }
        printf("\nsum of first n natural numbers...%d",sum);
    
    return 0;

}