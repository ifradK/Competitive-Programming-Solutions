#include<stdio.h>
main()
{
    int a,b,c,mid,total;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && b>c)
    {
            mid=b;
    }
    else if(b>a && a>c)
    {
            mid=a;
    }
    else if(b>c && c>a)
    {
            mid=c;
    }

    else if(c>b && b>a)
    {
            mid=b;
    }
    else if(c>a && a>b)
    {
            mid=a;
    }
    else if(a>c && c>b)
    {
            mid=c;
    }


    if(mid==a)
    {
        total=abs(mid-b)+abs(mid-c);
    }
    else if(mid==b)
    {
        total=abs(mid-a)+abs(mid-c);
    }
    else if(mid==c)
    {
        total=abs(mid-b)+abs(mid-a);
    }

    printf("%d",total);
    getch();
}
