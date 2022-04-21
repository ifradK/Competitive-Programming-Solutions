#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("I ");
        if(i%2!=0)
        {
            printf("hate ");
        }
        else
        {
           printf("love ");
        }
        if(i==n)
        {
            printf("it ");
        }
        else
        {
            printf("that ");
        }
    }
    getch();
}
