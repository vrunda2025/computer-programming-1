#include<stdio.h>
#define MAX 100
#include<stdlib.h>
struct stack 
{
    int arr[MAX];
    int top;
};
struct stack s;
int isempty()
{
    if(s.top==-1)
      return 1;
      else
      return 0;
}
int isfull()
{
    if(s.top==MAX-1)
      return 1;
     else
       return 0;
}
int push(int val)
{
    if(isfull())
    {
      printf("\nOverflowing.");
    }
    else
    {
       s.arr[++s.top] = val;
       return val; 
    } 
}
int pop()
{
    int val;
    if(isempty())
     
    {printf("\nUnderflowing.");
        return -1;
    }
      else
    { val=s.arr[s.top];
      s.top--;
      return val;
    }
}
int peek()
{
    if(isempty())
    {
    printf("\nStack is empty.");
    return -1;
    }
    else
    {
    return s.arr[s.top];
    }
}
int traverse()
{
    int i;
    if(isempty())
    {
        printf("\nStack is empty.");
    }
    else
    {
        for(i=0;i<MAX-1;i++)
           printf("\n%d",s.arr[i]);
    }
}

int main()
{
    int choice,val;
    s.top = -1;
 again:   
    printf("\n1.PUSH");
    printf("\n2.POP");
    printf("\n3.empty");
    printf("\n4.Traverse");
    printf("\n5.peek");
    printf("\n6.Exit");
    printf("\nEnter choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nENter a value : ");
            scanf("%d",&val);
            push(val);
            printf("\nPushed value : %d",val);
            break;
        case 2:
            val = pop();
            if (val!=-1)
               printf("\nPopped value = %d",val);
            break;
        case 3:
            if(isempty())
                printf("\nStack is empty.");
            else
                printf("\nStack is not empty.");    
            break;
        case 5:
          val = peek();
           if(val!=-1)
              printf("\nPEEK value = %d",val);
              break;  
        case 4:
              traverse();
              break;
        case 6:
              printf("\nExit");
              break;
                  
              
        default :
             printf("\ninvalid choice.")   ; 
       
    }
    if(choice == 6)
    {
        exit(0);
    }
    else
      goto again;
    
    return 0;
}



