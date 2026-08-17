#include<stdio.h>
#define MAX 20
#include<ctype.h>
struct stack
{
    char ele[MAX];
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
      s.ele[++s.top] = val; 
      return val;
    } 
}
int pop()
{
    if(isempty())
     
    {printf("\nUnderflowing.");
        return -1;
    }
      else
    { 
        return s.ele[s.top--] ;
    }
}

int main()
{
    char str[MAX],rev[MAX];
    int i=0,j=0;
    s.top = -1;
    printf("\nEnter a string :");
    scanf("%s",str);
    
    while(str[i]!='\0')
        {
            push(str[i]);
            i++;
        }
    while(!isempty())
        {
            rev[j++] = pop();
        }
    
     rev[j] = '\0';

         printf("\nReverse string : %s",rev);
  return 0;  
}
