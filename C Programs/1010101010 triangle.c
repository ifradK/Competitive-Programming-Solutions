#include<stdio.h>
main()
{
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                printf("1");
            }
            else if((i-j)%2==0 && i>j)
            {
                printf("1");
            }
            else if((i-j)%2!=0 && i>j)
            {
                printf("0");
            }

        }
 printf("\n");
    }
 getch();
    }
