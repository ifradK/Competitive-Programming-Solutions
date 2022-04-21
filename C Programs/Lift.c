#include<stdio.h>
main()
{
    int i,t,a,b;
    int c[50];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d", &a, &b);
          if(a>b)
    {
      c[i]=((a-b)*4)+3+5+3+(a*4)+3+5;
    }
    else if(b>a)
    {
      c[i]=((b-a)*4)+3+5+3+(a*4)+3+5;
    }
    else if(a==b)
    {
        c[i]=3+5+3+(a*4)+3+5;
    }
    }
    for(i=0;i<t;i++)
    {

    printf("Case %d: %d\n",i+1,c[i]);

    }
    getch();
}
