 #include<stdio.h>
int main()
{
     int n,i,sum=0;
    printf("enter a value");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
        
             sum+=(2*i-1);
        }
        
    
     printf("\nsum of first %d odd numbers...%d",n,sum);
    
    return 0;
}