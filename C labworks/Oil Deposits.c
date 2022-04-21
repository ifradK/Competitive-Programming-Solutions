#include<stdio.h>
int m,n,i,j;
char str[110][110]= {0};
void floodcheck(int x,int y)
{
    if(x < 0 || y < 0)
    {
        return;
    }
    if(str[x][y] != '@')
    {
        return;
    }
    if(str[x][y] == '@')
    {
        str[x][y] = '*';
    }
    floodcheck(x,y+1);
    floodcheck(x,y-1);
    floodcheck(x+1,y);
    floodcheck(x-1,y);
    floodcheck(x+1,y+1);
    floodcheck(x+1,y-1);
    floodcheck(x-1,y+1);
    floodcheck(x-1,y-1);
}
main()
{
    int count;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m==0)
        {
            break;
        }
        for(i=0; i<m; i++)
        {
            scanf("%s",str[i]);
        }
        count = 0;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(str[i][j]=='@')
                {
                    floodcheck(i,j);
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
