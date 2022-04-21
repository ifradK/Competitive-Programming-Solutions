#include<stdio.h>
main()
{
int n,i,count=0;
char a[200000];
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%s",&a);
if(a[0]=='T')
{count=count+4;}
else if(a[0]=='C')
{count=count+6;}
else if(a[0]=='O')
{count=count+8;}
else if(a[0]=='D')
{count=count+12;}
else if(a[0]=='I')
{count=count+20;}

}
printf("%d",count);
getch();
}




