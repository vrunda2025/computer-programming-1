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
    char a[100];
    char o[100];
    s.top=-1;
    printf("\nEnter the string: ");
    scanf("%s",a);
    
    for(int i=0;a[i]!='\0';i++)
    push(a[i]);
    int i=0,j=0;
    while(!isempty())
    a[i++]=pop();
    printf("Reverse of string: %s\n",a);
    
    for (int i=0; a[i]!='\0';i++)
        {
            if (isalnum(a[i]))
            {
                o[j++]=a[i];
            }
            else if ( a[i]==')' )
                push(a[i]);
            
            else if (a[i]=='(')
            {
                while(!isempty() && s.ele[s.top]!=')')
                {
                    o[j++]=pop();
                }
                pop();
            }
            
            else 
            {
                if (a[i]=='$') {
                while((!isempty()) && priority(a[i])<=priority(s.ele[s.top]))
                    {o[j++]=pop();}
                    push(a[i]); }
                else {
                while ((!isempty()) && priority(a[i])<priority(s.ele[s.top]))
                   { o[j++]=pop();}
                push(a[i]);
                }
            }
        }
            while(!isempty())
                o[j++]=pop();
                
    for(int i=0;o[i]!='\0';i++)
    {push(o[i]);}
    printf("Prefix String: ");
    while(!isempty())
    printf("%c",pop());

return 0;
}