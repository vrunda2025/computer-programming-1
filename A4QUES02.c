#include<stdio.h>
int main()
{
    int i,a[10];
    printf("enter 10 values : ");
    for(i=0;i<10;i++)
    {


        scanf("%d",a[i]);
    }
    printf("\n printing specific array numbers");
    printf("\n 4th value : %d",a[3]);
    printf("\n 7th value : %d",a[6]);
    printf("\n 9th value : %d",a[8]);
    return 0;
}
