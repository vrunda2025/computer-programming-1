#include<stdio.h>
void main()
{
    int a[4][5],i,j,size=0,k=0;
    printf("Enter elements of a matrix :");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]!=0)
            {
                size++;
            }
        }
    }
    int new_matrix[size][3];
    printf("\nSize of new matrix : %d",size);
   
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]!=0)
        {
           new_matrix[k][0]=i;
           new_matrix[k][1]=j;
           new_matrix[k][2]=a[i][j];
           k++;
        }
        }
    }

    printf("\nNew Matrix :\n");
    
        for(i=0;i<size;i++)
        {
            printf("%d\t%d\t%d\n",new_matrix[i][0],new_matrix[i][1],new_matrix[i][2]);
        
        }
        
    
    
   
}