#include<stdio.h>
main()
{
int a,z,z1,x,x1,c,c1,v,v1,b,b1,n1;
printf("Enter the number");
scanf("%d",&a);

z=a/2;
z1=a%2;
x=z/2;
x1=z%2;
c=x/2;
c1=x%2;
v=c/2;
v1=c%2;
b=v/2;
b1=v%2;
n1=b%2;

printf("%d%d%d%d%d%d",n1,b1,v1,c1,x1,z1);

getch();

}
