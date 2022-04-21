#include<stdio.h>
main()
{
    char a[10];
    int top=0,bottom=0,ch=0,value,i;
    while(1)
    {
        printf("\n\nEnter your choice\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n5. Display Array\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            if(top==10)
            {
                printf("\nStack full\n");
            }
            else
            {
                printf("\nEnter the value: ");
                scanf("%d",&value);
                a[top]=value;
                top++;
            }
        }
        else if(ch==2)
        {
            if(top==-1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Popped element is %d\n",a[top-1]);
                top--;
            }
        }
        else if(ch==3)
        {
            printf("The top element is %d\n",a[0]);
        }
        else if(ch==4)
        {
            return 0;
        }
        else if(ch==5)
        {
            for(i=0;i<top;i++)
            {
                printf("\n");
                printf("%d\n",a[i]);
            }
        }
        else
        {
            printf("The choice is invalid\n");
        }
    }
}
getch();

