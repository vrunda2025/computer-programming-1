    #include<stdio.h>
    void main()
    {
        int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
        printf("\nEnter elements of array a : ");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter elements of array b : ");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                for(k=0;k<2;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
        
            }
        }
        
        printf("\nMultiplication of matrix a and b :");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
              { 
                printf("%d\t",c[i][j]);
              }
              printf("\n");
        }
        
       
        
        
    }