#include<stdio.h>
void main()
{
    int d,n,r;
    printf("enter n : ");
    scanf("%d",&n);
    
    r=n*n;
    d=r%10;
    
    if(d==n)
    {
        printf("\nautomorphic");
    }
    else{
        printf("\nnot automorphic");
    }
}