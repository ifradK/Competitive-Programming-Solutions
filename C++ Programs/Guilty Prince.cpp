#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

int visited[21][21], cnt=1;
string matrix[21];

int bfs(int start_pos_i, int start_pos_j, int h, int w)
{
    visited[start_pos_i][start_pos_j]=1;
    queue<pair<int, int>> bfsQueue;
    bfsQueue.push(make_pair(start_pos_i,start_pos_j));
    while(!bfsQueue.empty())
    {
        pair<int, int> u=bfsQueue.front();
        bfsQueue.pop();
        if(u.first+1<h && u.first+1>=0 && u.second>=0 && u.second<w && matrix[u.first+1][u.second]=='.' && visited[u.first+1][u.second]==0)
        {
            visited[u.first+1][u.second]=1;
            bfsQueue.push(make_pair(u.first+1,u.second));
            cnt++;
        }
        if(u.first-1<h && u.first-1>=0 && u.second>=0 && u.second<w && matrix[u.first-1][u.second]=='.' && visited[u.first-1][u.second]==0)
        {
            visited[u.first-1][u.second]=1;
            bfsQueue.push(make_pair(u.first-1,u.second));
            cnt++;
        }
        if(u.first<h && u.first>=0 && u.second+1>=0 && u.second+1<w && matrix[u.first][u.second+1]=='.' && visited[u.first][u.second+1]==0)
        {
            visited[u.first][u.second+1]=1;
            bfsQueue.push(make_pair(u.first,u.second+1));
            cnt++;
        }
        if(u.first<h && u.first>=0 && u.second-1>=0 && u.second-1<w && matrix[u.first][u.second-1]=='.' && visited[u.first][u.second-1]==0)
        {
            visited[u.first][u.second-1]=1;
            bfsQueue.push(make_pair(u.first,u.second-1));
            cnt++;
        }

        visited[u.first][u.second]=2;
    }
    return cnt;
}

int main()
{
    fastio;
    int t,w,h,i,j,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>w>>h;
        cnt=1;
        bool flag=false;
        for(i=0;i<h;i++)
        {
            cin>>matrix[i];
        }
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                visited[i][j]=0;
            }
        }
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(matrix[i][j]=='@')
                {
                    flag=true;
                    matrix[i][j]='.';
                    break;
                }
            }
            if(flag==true)
            {
                break;
            }
        }
        cout<<"Case "<<cs++<<": "<<bfs(i,j,h,w)<<endl;
    }
    return 0;
}
