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

void insertionSort(int data)
{
    	struct Node* temp=head;
    	struct Node* previous=NULL;

    	struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    	t->data=data;
    	t->link=NULL;

    	if(temp==NULL)
    	{
        		t->link=NULL;
        		head=t;
        		return;
    	}

    	if(data<temp->data)
    	{
        		t->link=head;
        		head=t;
        		return;
    	}
    	else
    	{
        		while(temp!=NULL)
        		{
            			if(data>temp->data)
            			{
                				previous=temp;
                				temp=temp->link;
                				continue;
            			}
            			else
            			{
                				previous->link=t;
                				t->link=temp;
                				return;
            			}
        		}
        		previous->link=t;
    	}
}

int main()
{
    	printf("Enter number of values:");
    	int n,a;
    	scanf("%d",&n);
    	for(int i=0;i<n;i++)
        {
           printf("Enter the value:");
           scanf("%d",&a);
           insertionSort(a);
           print();
        }
    	return 0;
}

