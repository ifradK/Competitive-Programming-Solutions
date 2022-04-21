#include<stdio.h>
#include<string.h>
main()
{
int i,T;
char N[1000000],p[1000000];
scanf("%d",&T);
gets(N);
for(i=0;i<T;i++)
{
gets(N);
p[i]=strlen(N[i]);
}
for(i=0;i<T;i++)
{
printf("\n%d", N[0]+N[p[i]-1]);
}
getch();
}
