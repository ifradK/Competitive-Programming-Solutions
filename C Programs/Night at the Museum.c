#include<stdio.h>
#include<string.h>
int min(int a1,int b1)
{
    int c=(a1<b1?a1:b1);
    return c;
}
main()
{
    int i,len,count,sum=0,b=0;
    char a[110]= {0};
    gets(a);
    len=strlen(a);
    if('a'-a[0]<0)
    {b=min((26+('a'-a[0])),(a[0]-'a'));}
    for(i=0; i<len-1; i++)
    {
        if(a[i]-a[i+1]>0)
        {count=min((a[i]-a[i+1]),(26+(a[i+1]-a[i])));
        sum=sum+count;}
        else if(a[i]-a[i+1]<0)
          {count=min((26+(a[i]-a[i+1])),(a[i+1]-a[i]));
        sum=sum+count;}
        else if(a[i]-a[i+1]==0)
        {
            count=0;
            sum=sum+count;
        }
    }
    printf("%d",sum+b);
    getch();
}
