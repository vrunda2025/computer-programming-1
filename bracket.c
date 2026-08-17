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
    if(s.top == -1)
      return 1;
    else 
    return 0;
}
int isfull()
{
    if(s.top == MAX-1)
    return 1;
    else
    return 0;
}
int push(int val)
{
    if(isfull())
    {
        printf("\noverflowing");
    }
    else
        s.ele[++s.top]= val;
        return val;
}
int pop()
{
    
    if(isempty())
       printf("\nunderflowing");
    else
       return  s.ele[s.top--] ;   
}
int match(char open,char close)
{
    if(open=='('&&close==')')
      return 1;
    if(open=='['&&close==']')
      return 2;
    if(open=='{'&&close=='}')
      return 3;
      
      return 0;
}
int main()
{
     char exp[MAX];
     int i=0,balanced = 1;
     s.top = -1;
     printf("\nEnter expression :");
     scanf("%s",exp);
  while(exp[i]!='\0')
  {
     if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
     {
        push(exp[i]);
     }
     else if(exp[i]=='}'||exp[i]==']'||exp[i]==')')
     {
        if(isempty())
        {
           balanced = 0;
        }
          char open =pop();
          if(!match(open,exp[i]))
            balanced = 0;
     }
     i++;
    }
    if(!isempty())
     balanced = 0;
    if(balanced==0)
    {
        printf("\nNot balanced");
    } 
    else
    {
        printf("\nBalanced");
    }
   
    return 0;
}