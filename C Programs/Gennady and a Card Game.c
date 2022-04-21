#include<stdio.h>
main()
{
    int i,j,p=0;
    char a[3]= {0};
    char b[20]= {0};
    gets(a);
    gets(b);
    for(i=0; i<20; i++)
    {
        if(b[i]==a[0] || b[i]==a[1])
        {
            printf("YES");
            p=1;
            break;
        }
    }
    if(p!=1)
    {
        {
            printf("NO");
        }
    }
    getch();
}

