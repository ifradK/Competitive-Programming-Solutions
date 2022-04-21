#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int matrix[1000][1000];
int colour[1000];

int bicolour(int i, int c, int node)
{
    int j;
    colour[i]=c;
    for(j=0; j<node; j++)
    {
        if(matrix[i][j]==1)
        {
            if(colour[j]==0)
            {
                if(bicolour(j,3-c,node)==0)
                {
                    return 0;
                }
            }
            else if(colour[j]==c)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    fastio;
    while(1)
    {
        int node,edge,i,a,b;
        cin>>node;
        if(node==0)
        {
            break;
        }
        cin>>edge;
        memset(matrix,0,sizeof(matrix));
        memset(colour,0,sizeof(colour));
        for(i=0; i<edge; i++)
        {
            cin>>a>>b;
            matrix[a][b]=1;
            matrix[b][a]=1;
        }
        if(bicolour(0,1,node)==1)
        {
            cout<<"BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }
    return 0;
}
