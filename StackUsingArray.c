#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int top=-1;
int stack[MAX];

void push();
void pop();
coid peek();
coid display();
void isfull();
void isempty();

void main()
{
    int choice;
    
    do{
        printf("1.Push 2.Pop 3.Peek 4.isfull 5.isempty 6.display 7.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:isfull();
            break;
            case 5:isempty();
            break;
            case 6:display();
            break;
            case 7: exit(0);
        }
    }while(choice!= 7);
    
    
}
void isfull()
{
    if(top==MAX-1)
    {
        printf("Stack is full");
    }
}
void isempty()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
}
void push()
{
    int item;
    if(top==MAX-1)
    {
        printf("Stack is full");
    }
    else
    {
        top+=1;
        printf("enter the element");
        scanf("%d",&item);
        stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("deleted item is %d",stack[top]);
        top-=1;
        
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("deleted item is %d",stack[top]);
    }
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
}
