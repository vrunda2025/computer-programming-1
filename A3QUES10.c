   #include<stdio.h>
int main()
{
   int i,factorial=1,n;
   printf("enter n : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++);
   {
      printf("\n%d",i);
      factorial=factorial*i;
   }
   printf("\nfactorial : %d",factorial);
   return 0;
}