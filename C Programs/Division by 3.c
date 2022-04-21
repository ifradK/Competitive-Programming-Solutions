#include<stdio.h>
main()
{
int i,t;
long a,b,c;
int result[10000];
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%ld %ld", &a, &b);
c=(b-a)+1;

if(c%3==0 || c%3==1)
{result[i]=(c/3)*2;}

else if(c%3==2)
{
    result[i]=(((c/3)*2)+1);
if(c==2)
{
  result[i]=result[i]+1;
}

}
}
for(i=0;i<t;i++)
{
printf("Case %d: %d\n",i+1,result[i]);
}

getch();

}
