#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

int visited[50][50];
string matrix[50];
int cnt=0;

void dfs2(int i, int j, int vertex)
{
    visited[i][j]=1;
    if(i-1>=0 && i-1<vertex && j-1>=0 && j-1<vertex && visited[i-1][j-1]==0 && matrix[i-1][j-1]=='1') {dfs2(i-1,j-1,vertex);}
    if(i-1>=0 && i-1<vertex && j>=0 && j<vertex && visited[i-1][j]==0 && matrix[i-1][j]=='1')         {dfs2(i-1,j,vertex);}
    if(i-1>=0 && i-1<vertex && j+1>=0 && j+1<vertex && visited[i-1][j+1]==0 && matrix[i-1][j+1]=='1') {dfs2(i-1,j+1,vertex);}
    if(i>=0 && i<vertex && j-1>=0 && j-1<vertex && visited[i][j-1]==0 && matrix[i][j-1]=='1')         {dfs2(i,j-1,vertex);}
    if(i>=0 && i<vertex && j+1>=0 && j+1<vertex && visited[i][j+1]==0 && matrix[i][j+1]=='1')         {dfs2(i,j+1,vertex);}
    if(i+1>=0 && i+1<vertex && j-1>=0 && j-1<vertex && visited[i+1][j-1]==0 && matrix[i+1][j-1]=='1') {dfs2(i+1,j-1,vertex);}
    if(i+1>=0 && i+1<vertex && j>=0 && j<vertex && visited[i+1][j]==0 && matrix[i+1][j]=='1')         {dfs2(i+1,j,vertex);}
    if(i+1>=0 && i+1<vertex && j+1>=0 && j+1<vertex && visited[i+1][j+1]==0 && matrix[i+1][j+1]=='1') {dfs2(i+1,j+1,vertex);}
    visited[i][j]=2;
}

void dfs(int vertex)
{
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            if(visited[i][j]==0 && matrix[i][j]=='1')
            {
                cnt++;
                dfs2(i,j,vertex);
            }
        }
    }
}


int main()
{
    fastio;
    int n,i,cs=1;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>matrix[i];
        }
        cnt=0;
        memset(visited,0,sizeof(visited));
        dfs(n);

        cout<<"Image number "<<cs++<<" contains "<<cnt<<" war eagles."<<endl;
    }
    return 0;
}
