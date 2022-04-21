#include<stdio.h>

struct Node
{
    int data;
    struct Node* link;
};

struct Node* head;

void print()
{
    struct Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}

void addNodeEnd(int value)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct Node* t;
        t=head;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}

main()
{
    head=NULL;
    int option,value;
    for( ; ; )
    {
        printf("1. Add Node\n2. Print Nodes\n3. Exit\n");
        scanf("%d",&option);
        if(option==3)
        {
            return 0;
        }
        else if(option==1)
        {
            printf("Enter the new value\n");
            scanf("%d",&value);
            addNodeEnd(value);
        }
        else if(option==2)
        {
            print();
        }
        else
        {
            printf("\nSelection invalid\n");
        }
    }
}
