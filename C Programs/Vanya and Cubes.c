#include<stdio.h>
main()
{
    int n,i=1,block=0,count=0,s,t=0;
    scanf("%d",&n);
        while(t<=n)
        {
           block=block+i;
           s=block;
           t=t+s;
           if(t<=n)
           {count++;}
           i++;
        }
    printf("%d",count);
    getch();
}
