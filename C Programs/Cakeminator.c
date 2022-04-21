#include<stdio.h>
main()
{
    int r,c,dot=0,dot1=0,sub,sum=0,column=0,row=0;
    char a[11][11]={0};
    scanf("%d %d",&r,&c);
    int i,j;
    for(i=0; i<r; i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0; i<r; i++)
    {
        dot=0;
        for(j=0; j<c; j++)
        {
            if(a[i][j]=='.')
            {
                dot++;
            }
        }
        if(dot==c)
        {
            sum=sum+dot;
            row++;
        }
    }
    for(i=0;i<c;i++)
    {
        dot1=0;
        for(j=0;j<r;j++)
        {
            if(a[j][i]=='.')
            {
                dot1++;
            }
        }
        if(dot1==r)
        {
            sum=sum+dot1;
            column++;
        }
    }
    sub=column*row;
    printf("%d",sum-sub);
    getch();
}

