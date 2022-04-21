#include<stdio.h>
int w,h,i,j,count;
char str[30][30]= {0};
void floodcheck(int x,int y)
{
    if(x < 0 || y < 0 || x>=h || y>=w)
    {
        return;
    }
    if(str[x][y] == '#')
    {
        return;
    }
    if(str[x][y] == '.')
    {
        str[x][y] = '#';
        count++;
    }
    floodcheck(x,y+1);
    floodcheck(x,y-1);
    floodcheck(x+1,y);
    floodcheck(x-1,y);
}
main()
{
    int t,k,m;
    int l;
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        //count=0;
        scanf("%d %d",&w,&h);
            if(h==0)
            {
                break;
            }
            for(m=0; m<h; m++)
            {
                scanf("%s",str[m]);
            }
            for(i=0; i<h; i++)
            {
                for(j=0; j<w; j++)
                {
                    count=0;
                    if(str[i][j]=='@')
                    {
                        floodcheck(i,j);
                        break;
                    }
                }
                if(count>0)
                {
                    break;
                }
            }
            printf("Case %d: %d\n",k+1,count+1);
    }

    return 0;
}

