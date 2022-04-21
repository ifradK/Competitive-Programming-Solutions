#include<stdio.h>
main()
{
    int a,b,i,a1=0,b1=0,count=0;
    scanf("%d %d", &a, &b);
    a1=a;
    b1=b;
    for(i=0;i>=0;i++)
    {
        a1=a1*3;
        b1=b1*2;
        count++;
        if(a1>b1)
        {
            printf("%d",count);
            break;
        }
    }
    getch();
}
