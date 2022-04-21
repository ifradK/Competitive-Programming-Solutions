#include<stdio.h>
main()
{
int n,i;

printf("Enter a number:");
scanf("%d",&n);

for(i=2;i<n;i++)
{
if(n%i==0)
{
    printf("The number is NOT PRIME NUMBER\n");
goto a;
}
}


    printf("The number is PRIME NUMBER\n");


a:
getch();
}
