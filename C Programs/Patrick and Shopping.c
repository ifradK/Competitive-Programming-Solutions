#include<stdio.h>
main()
{
    int a,b,c,d1,d2,d3,d4;
    scanf("%d %d %d", &a, &b, &c);
    d1=a+b+c;
    d2=a+a+b+b;
    d3=b+c+b+c;
    d4=a+c+a+c;
    if(d1<=d2 && d1<=d3 && d1<=d4) printf("%d",d1);
    else if(d2<=d1 && d2<=d3 && d2<=d4) printf("%d",d2);
    else if(d3<=d2 && d3<=d1 && d1<=d4) printf("%d",d3);
    else if(d4<=d2 && d4<=d3 && d4<=d1) printf("%d",d4);

    getch();
}
