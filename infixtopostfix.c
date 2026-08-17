#include<stdio.h>
#define MAX 20
#include <ctype.h>
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
int peek()
{
    if(isempty())
    {
    printf("\nStack is empty.");
    return -1;
    }
    else
    {
    return s.ele[s.top];
    }
}
int priority(char ch)
{
     if (ch=='+' || ch=='-')
     {
        return 1;
     }
     if(ch=='*'|| ch=='/')
     {
        return 2;
     }
     if (ch=='$')
     {
        return 3;
     }
     else
     return 0;
}

int main()
{
    char infix[MAX],postfix[MAX];
    int i=0,j=0;
    s.top = -1;
    printf("\nEter an infix expression :");
    scanf("%s",infix);

    while(infix[i]!='\0')
    {
        if(isalnum(infix[i]))
        {
            postfix[j++]=infix[i];
        }
        else if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while(s.top != -1 && s.ele[s.top]!='(')
                postfix[j++] = pop();
            if(!isempty())
               pop();    
        }
        else
        {
            while(!isempty() && priority(s.ele[s.top])>=priority(infix[i]) &&s.ele[ s.top]!='(')
            {
               postfix[j++]=pop();
            }
               push(infix[i]);
        }
        i++;
    }
     while(s.top!=-1)
    {
        postfix[j++] = pop();
    }
   
    postfix[j]='\0';
      
    printf("\nPostfix: %s",postfix);
    return 0;
}