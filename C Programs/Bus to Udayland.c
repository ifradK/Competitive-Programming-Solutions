#include<stdio.h>
main()
{
    int i,j,n,p=0;
    char a[1000][6];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<6; j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i][1]=='O' && a[i][2]=='O')
        {
            p=1;
            a[i][1]='+';
            a[i][2]='+';
            printf("YES");
            for(i=0; i<n; i++)
            {
                for(j=0; j<6; j++)
                {
                    printf("%c",a[i][j]);
                }
            }
            break;
        }
        else if(a[i][4]=='O' && a[i][5]=='O')
        {
            p=1;
            a[i][4]='+';
            a[i][5]='+';
            printf("YES");
            for(i=0; i<n; i++)
            {
                for(j=0; j<6; j++)
                {
                    printf("%c",a[i][j]);
                }
            }
            break;
        }
    }

    if(p!=1)
    {
        printf("NO");
    }
    getch();
}
