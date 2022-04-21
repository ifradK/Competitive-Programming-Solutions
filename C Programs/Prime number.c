#include<stdio.h>
main()
{
int n,i;

printf("enter a number");
scanf("%d",&n);

i=2;
while(i<=n-1)
{
if(n%i==0)
{
printf("Not a prime number\n");

}
i++;
}
if(i==n)
printf("Prime number\n");
getch();
}
