#include<stdio.h>
main()
{
    char a[110][110];
    int q,w,i,j,l=0;
    scanf("%d %d", &q, &w);
    for(i=0; i<q; i++)
    {
        for(j=0; j<w; j++)
        {
            scanf("%c %c", &a[i], a[j]);
        }
    }

    for(i=0; i<q; i++)
    {
        for(j=0; j<w; j++)
        {
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
            {
                l=1;

            }

        }
    }

    if(l==1)
    {
        printf("#Color");
    }
    else if(l==0)
    {
        printf("#Black&White");
    }

    getch();

}
