#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int queue[MAX];
int front =-1;
int rear=-1;
void main()
{
    int choice;
    do
    {
        printf("1.Enqueue 2.Dequeue 3.isfull 4.isempty 5.display 6.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:isfull();
            break;
            case 4:isempty();
            break;
            case 5:display();
            break;
            case 6: exit(0);
        }
        
    }while(choice!=6);
    
    
}
void enqueue()
{
    if(rear==MAX-1)
    {
        printf("queue Overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front =0;
        }
        int item;
        rear+=1;
        printf("enter the item\n");
        scanf("%d",&item);
        queue[rear]=item;
    }
}
void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}
void isfull()
{
    if(rear ==MAX-1)
        printf(" Queue overflow\n");
    else
        printf("queue is not full\n");
}
void isempty()
{
    if(front == - 1 || front > rear)
        printf("Queue underflow\n");
    else
        printf("Queue is not empty\n");
}
void display()
{
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
