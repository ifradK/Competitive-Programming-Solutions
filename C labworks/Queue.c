#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
char a[10]= {0};
int front,rear;
bool isEmpty()
{
    return (front==-1 && rear==-1)? true:false;
}
bool isFull()
{
    return (rear+1)%10==front? true:false;
}
void enQueue(int x)
{
    if(isFull()==true)
    {
        printf("Queue is full\n");
        return;
    }
    else if(isEmpty()==true)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=(rear+1)%10;
    }
    a[rear]=x;
}
void deQueue()
{
    if(isEmpty()==1)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%10;
    }
}
void print()
{
    int i,length;
    length=(rear+10-front)%10+1;
    for(i=0; i<length; i++)
    {
        printf("%d ",a[front+i%10]);
    }
    printf("\n");
}
int main()
{
    front=-1;
    rear=-1;
    int x,option;
    while(1)
    {
        printf("Choose an option\n");
        printf("1.Enqueue\n2.Dequeue\n3.Exit\n");
        scanf("%d",&option);
        if(option==1)
        {
            printf("Enter the value: ");
            scanf("%d",&x);
            enQueue(x);
            print();
        }
        else if(option==2)
        {
            deQueue();
            print();
        }
        else if(option==3)
        {
            break;
        }
        else
        {
            printf("Not a valid option");
        }
    }
getch();
}
