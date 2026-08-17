#include<stdio.h>
#define MAX 100
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
int push(char val)
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
int operator(char ch,int op1,int op2)
{
    if(ch=='+')
      return op1+op2;
    else if(ch=='-')
      return op1-op2;
    else if(ch=='*')
      return op1*op2;
    else if(ch=='/')
    return op1/op2;
    else if(ch=='$')
      return op1^op2;
      
      return 0;
}

int main()
{
    char postfix[MAX];
    int i=0,x,j=0,op1,op2;
    s.top = -1;
    printf("\nEnter expression: ");
    scanf("%s",postfix);

    while(postfix[i]!='\0')
    {
        if(isdigit(postfix[i]))
            push(postfix[i] - 48);
        else if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='*' || postfix[i]=='/' ||postfix[i]=='$')
        {
            op2 = pop();
            op1 = pop();
            x = operator(postfix[i],op1,op2);
            push(x);
        }    
        i++;
    }
   printf("\nResult : %d",pop());
   return 0;
}
