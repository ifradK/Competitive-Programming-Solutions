#include<stdio.h>
int main()
{
    int t,a1,a2,b1,b2,c1,c2,i,d1,d2;
    long long q,area;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);

       d1=c1+a1-b1;
        d2=c2+a2-b2;

        q=((a1*b2)+(b1*c2)+(c1*d2)+(d1*a2))-((a2*b1)+(b2*c1)+(c2*d1)+(d2*a1));
        if(q<0)
            q*=-1;
        area=0.5*q;
        printf("Case %d: %d %d %lld",i,d1,d2,area);
    }
    return 0;
}
