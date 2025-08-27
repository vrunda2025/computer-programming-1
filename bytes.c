#include<stdio.h>
void main()
{
    float b ,KB,MB,GB ;
    printf("enter bytes");
    scanf("%f",&b);
    KB=b/1024;
    printf("\nkilobytes: %f",KB);

    MB=KB/1024;
    printf("\nmegabytes: %f",MB);

    GB=MB/1024;
    printf("\ngigabytes: %f",GB);

}    


   