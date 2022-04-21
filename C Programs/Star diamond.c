#include<stdio.h>
main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i<=n && j<=n)
            {
                if(j>n-i){printf("*");}
                else {printf(" ");}
            }
            if(i<=n && j>n)
            {
                if(j<n+i){printf("*");}
                else {printf(" ");}
            }
            if(i>n && j<=n)
            {
                if(j>i-n){printf("*");}
                else {printf(" ");}
            }
            if(i>n && j>n)
            {
                if(j<(3*n-i)){printf("*");}
                else {printf(" ");}
            }
        }
        printf("\n");
    }
    getch();
}
