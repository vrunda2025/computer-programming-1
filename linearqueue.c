#include<stdio.h>
#define MAX 20
#include<stdlib.h>
struct queue
{
    int ele[MAX];
    int rear,front;
};
struct queue q;
int front=-1;
int rear=-1;
int isempty()
{
    if(front==-1)
      return 1;
    else
    return 0;  
}
int isfull()
{
    if(rear==MAX-1)
    return 1;
    else return 0;
}
int enqueue(int  item)
{
    if(isfull( q,rear))
    {
        printf("\nOverflowing");
        return 0;
    }
    if (isempty(q,front,rear))
    {
    front = 0;
    rear=0;
    }
    else
    {
    rear = rear+1;
    } 
    q.ele[q.rear] = item;
    return item;
}
int dequeue()
{
    int item;
    if(isempty(q,front,rear))
    {
        printf("\nUnderflowing");
        return -1;
    }
    item = q.ele[q.front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else 
      front=front+1;
      return item;
}
int peek()
{
    int item;
    if(isempty(q,front,rear))
      printf("\nQueue is empty.");
     else
      item = q.ele[q.rear];
      return item;  
}
int traverse()
{
    int i;
    if (isempty(q,front,rear))
       printf("\nEmpty.");
    else
    for(i=front;i<=rear;i++)
    {
        printf("%d",q.ele[i]);
    }
}

int main()
{
   
    int choice,item;
again:    
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.Peek");
    printf("\n4.Transverse");
    printf("\n5.Exit");
    printf("\nEnter your choice.");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter an item :");
            scanf("%d",&item);
            enqueue(item);
            printf("\nEnqueued item : %d",item);
            break;
        case 2:
             item = dequeue();
             if(item!=0)
        {  
              printf("\nDequeued item : %d",item);
        }    
              break;
        case 3:
             item = peek();
             if(item!=0)
        {
              printf("\nFront item = %d",item);
        }
              break;
        case 4:
           traverse();
           break;
         case 5:
           printf("\nExit");
           break;
        default:
        printf("\nInvalid choice");
         
    }
    if(choice==5)
        exit(0);
    else goto again;    
    return 0;
}





