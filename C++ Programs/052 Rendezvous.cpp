#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int matrix[50][50];

void floydWarshall(int node)
{
    int i,j,k;
    for(k=1; k<=node; k++)
    {
        for(i=1; i<=node; i++)
        {
            for(j=1; j<=node; j++)
            {
                if(matrix[i][k] + matrix[k][j] < matrix[i][j])
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }
}

void init()
{
    memset(matrix,63,sizeof(matrix));
    for(int i=0,j=0; i<50,j<50; i++,j++)
    {
        matrix[i][j]=0;
    }
}

int main()
{
    fastio;
    int n,m,i,j,k,x,y,z,cs=1;
    string str;
    while(1)
    {
        init();
        int number=1,ans=INT_MAX,node;
        map<int,string> mp;
        cin>>n>>m;
        if(n==0 && m==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            cin>>str;
            mp[number]=str;
            number++;
        }
        for(i=0;i<m;i++)
        {
            cin>>x>>y>>z;
            matrix[x][y]=z;
            matrix[y][x]=z;
        }
        floydWarshall(n);
        for(i=1;i<=n;i++)
        {
            int sum=0;
            for(j=1;j<=n;j++)
            {
                sum=sum+matrix[i][j];
            }
            if(sum<ans)
            {
                ans=sum;
                node=i;
            }
        }
        cout<<"Case #"<<cs++<<" : "<<mp[node]<<endl;
        mp.clear();
    }
    return 0;
}
