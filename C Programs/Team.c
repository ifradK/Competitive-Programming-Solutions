#include<stdio.h>
main()
{
int n,i,j,p=0;
int q;
int a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
if(a[j]=='1 0 0')
p=p+0;
else if(a[j]=='1 1 0')
p=p+1;
else if(a[j]=='1 1 1')
p=p+1;
else if(a[j]=='0 0 1')
p=p+0;
else if(a[j]=='0 1 1')
p=p+1;
else if(a[j]=='0 0 0')
p=p+0;
else if(a[j]=='0 1 0')
p=p+0;
else if(a[j]=='1 0 1')
p=p+1;
}

p=q;
printf("%d",q);

getch();
}
