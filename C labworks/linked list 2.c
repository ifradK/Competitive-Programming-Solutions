#include<stdio.h>
#include<stdlib.h>

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

void printReverse(struct Node* head)
{
    if (head==NULL)
      {
         return;
      }
    printReverse(head->link);
    printf("%d\n",head->data);
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

void addNodeFront(int value)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->link=head;
    head=temp;
}

void updateNode(int newValue,int valueToReplace)
{
   struct Node* q;
   q=head;
   while(1)
   {
     if(q->data==valueToReplace)
     {
         q->data=newValue;
         return ;
     }
     q=q->link;
   }
}

void deleteNode(int deleteValue)
{
    struct Node* current;
    struct Node* previous;
    current=head;
    if(current->data==deleteValue)
    {
        head=current->link;
        free(current);
        return;
    }
    while(1)
    {
        if(current->data==deleteValue)
        {
           previous->link=current->link;
           free(current);
           return ;
        }
        previous=current;
        current=current->link;
    }
}

void insertNodeBack(int beforeValue,int insertValue)
{
    struct Node* current;
    struct Node* previous;
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    current=head;
    while(1)
    {
        if(current->data==beforeValue)
        {
            temp->data=insertValue;
            temp->link=current->link;
            current->link=temp;
            return ;
        }
        current=current->link;
    }
}

void insertNodeFront(int afterValue,int insertValue)
{
    struct Node* current;
    struct Node* previous;
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    current=head;
    while(1)
    {
        if(current->data==afterValue)
        {
            temp->data=insertValue;
            temp->link=previous->link;
            previous->link=temp;
            return ;
        }
        previous=current;
        current=current->link;
    }
}

int main()
{
    head=NULL;
    int option,value,newValue,valueToReplace,deleteValue,insertValue,beforeValue,afterValue;
    for( ; ; )
    {
        printf("1. Add Node at the Back\n2. Add Node at the Front\n3. Print Nodes\n4. Print nodes in Reverse order\n5. Update\n6. Delete Node\n7. Insert Node at Back\n8. Insert Node at Front\n9. Exit\n");
        scanf("%d",&option);
        if(option==9)
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
            printf("Enter the new value\n");
            scanf("%d",&value);
            addNodeFront(value);
        }
        else if(option==3)
        {
            print();
        }
        else if(option==4)
        {
            printReverse(head);
        }
        else if(option==5)
        {
            printf("Enter value to replace:\n");
            scanf("%d",&valueToReplace);
            printf("Enter new value:\n");
            scanf("%d",&newValue);
            updateNode(newValue,valueToReplace);
        }
        else if(option==6)
        {
            printf("Enter the value to delete:\n");
            scanf("%d",&deleteValue);
            deleteNode(deleteValue);
        }
        else if(option==7)
        {
            printf("Enter after which value you want to insert node:\n");
            scanf("%d",&beforeValue);
            printf("Enter new value:\n");
            scanf("%d",&insertValue);
            insertNodeBack(beforeValue,insertValue);
        }
        else if(option==8)
        {
            printf("Enter before which value you want to insert node:\n");
            scanf("%d",&afterValue);
            printf("Enter new value:\n");
            scanf("%d",&insertValue);
            insertNodeFront(afterValue,insertValue);
        }
        else
        {
            printf("\nSelection invalid\n");
        }
    }
    return 0;
}


