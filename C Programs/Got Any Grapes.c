#include<stdio.h>
main()
{
    int a,b,c,x,y,z;
    int green,purple,black,dmitry,all;
    scanf("%d %d %d", &x, &y, &z);
    scanf("%d %d %d", &a, &b, &c);
    if(a>=x)
    {
        green=a-x;
        dmitry=green+b;
        if(dmitry>=y)
        {
            all=dmitry-y+c;
            if(all>=z)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    getch();
}
