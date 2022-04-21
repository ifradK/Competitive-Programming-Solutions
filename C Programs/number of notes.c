#include<stdio.h>
main()
{
    int money,a,a1,b,b1,c,c1,d,d1,e,e1,f,f1,g,g1,h;
    scanf("%d",&money);
    a=money/500;
    a1=money%500;
    b=a1/100;
    b1=a1%100;
    c=b1/50;
    c1=b1%50;
    d=c1/20;
    d1=c1%20;
    e=d1/10;
    e1=d1%10;
    f=e1/5;
    f1=e1%5;
    g=f1/2;
    g1=f1%2;
    h=g1/1;

    if(a!=0){printf("500 : %d\n",a);}
    if(b!=0){printf("100 : %d\n",b);}
    if(c!=0){printf("50 : %d\n",c);}
    if(d!=0){printf("20 : %d\n",d);}
    if(e!=0){printf("10 : %d\n",e);}
    if(f!=0){printf("5 : %d\n",f);}
    if(g!=0){printf("2 : %d\n",g);}
    if(h!=0){printf("1 : %d\n",h);}

    return 0;
}
