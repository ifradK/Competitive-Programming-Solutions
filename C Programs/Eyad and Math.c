#include<stdio.h>
#include<math.h>
main()
{
    int t,i;
    long long a,b,c,d;
    double w1,w2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        w1=b*log(a);
        w2=d*log(c);
        if(w1>=w2)
        {
            printf(">\n");
        }
        else
        {
            printf("<\n");
        }
    }
        getch();
    }
