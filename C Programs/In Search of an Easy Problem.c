#include<stdio.h>
main()
{
    int i,n,c;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
             if(a[i]==1)
        {
            printf("HARD");
            goto c;
        }

    }
    printf("EASY");
    c:
    getch();

}
