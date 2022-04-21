#include<stdio.h>
main()
{
    int i,q;
    long a,b,c,d;
    scanf("%d",&q);
    for(i=0; i<q; i++)
    {
        scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if(b==d)
        {
        printf("%ld %ld\n",a,d);
        }
        else
        {
          printf("%ld %ld\n",b,d);
        }
    }
    getch();
}
