#include<stdio.h>
int main()
{
    int n, i,j,a[9],b[]={500,200,100,50,20,10,5,2,1},temp;
    printf("\nEnter amount : ");
    scanf("%d",&n);
    temp=n;
    for(i=0;i<9;i++)
    {
        j=temp/b[i];
        a[i]=j;
        temp=temp%b[i];
    }
    for(i=0;i<9;i++)
    {
        printf("\n%dnotes =%d",b[i],a[i]);
    }
    return 0;
}