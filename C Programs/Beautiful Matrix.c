#include<stdio.h>
int main ()
{
    int i,j,st[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d", &st[i][j] );
        }
    }
    if(st[0][0]==1 || st[0][4]==1 || st[4][0]==1 || st[4][4]==1)
    {printf("4");}
    else if(st[0][1]==1 || st[1][0]==1 || st[3][0]==1 || st[4][1]==1 || st[0][3]==1 || st[1][4]==1 || st[3][4]==1 || st[4][3]==1)
    {printf("3");}
    else if(st[0][2]==1 || st[1][1]==1 || st[2][0]==1 || st[3][1]==1 || st[4][2]==1 || st[3][3]==1 || st[2][4]==1 || st[1][3]==1)
    {printf("2");}
    else if(st[1][2]==1 || st[2][1]==1 || st[2][3]==1 || st[3][2]==1)
    {printf("1");}
    else if(st[2][2]==1)
    {printf("0");}
     getch();
     }
