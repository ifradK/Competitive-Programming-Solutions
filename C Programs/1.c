#include<stdio.h>
main()
{
int n,i=0,number;
int a;

printf("Enter how many numbers");
scanf("%d",&n);

while(i<n)
    {
     printf("Enter the numbers");
     scanf("%d",&a);
     if(a<30)
     {number++;
     }
    }
    i++;
    printf("%d numbers were smaller than 30",number);
getch();
}
