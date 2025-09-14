#include<stdio.h>
int main()
{
    int i,count_g=0,count_b=0;
    char gender;
    printf("enter gender of 50 students (b for boy,g for girl):\n ");
    for(i=1;i<=50;i++)
    {
        printf("student : %d",i);
        scanf("%c ",&gender);

        if(gender=='b')
        {
            count_b++;
        }
        else if(gender=='g')
        {
            count_g++;
        }
        
    }
    printf("\n....class summary....");
    printf("\nnumber of boys",count_b);
    printf("\nnumber of girls",count_g);
    return 0;
}