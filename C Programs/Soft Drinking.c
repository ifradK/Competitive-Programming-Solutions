#include<stdio.h>
main()
{
    int n, k, l, c1, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d",&n, &k, &l, &c1, &d, &p, &nl, &np);
    int a=(k*l)/nl;
    int b=c1*d;
    int c=p/np;
    if(a<=b && a<=c){printf("%d",a/n);}
    else if(b<=a && b<=c){printf("%d",b/n);}
    else if(c<=b && c<=a){printf("%d",c/n);}
    getch();
}
