#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,m,i,j,x,y;
    cin>>t;
    while(t--)
    {
        long long cnt=0,ans=0;
        bool flag=false;
        cin>>n>>m;
        string grid[n];
        for(i=0; i<n; i++)
        {
            cin>>grid[i];
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(grid[i][j]=='D' || grid[i][j]=='R')
                {
                    x=i;
                    y=j;
                    while(1)
                    {
                        if(grid[x][y]=='C'|| grid[x][y]=='#')
                        {
                            break;
                        }
                        else if(grid[x][y]=='R')
                        {
                            grid[x][y]='#';
                            if(y+1>m-1)
                            {
                                ans++;
                                x++;
                            }
                            else
                            {
                                y++;
                            }
                        }
                        else if(grid[x][y]=='D')
                        {
                            grid[x][y]='#';
                            if(x+1>n-1)
                            {
                                ans++;
                                y++;
                            }
                            else
                            {
                                x++;
                            }
                        }
                    }
                }
            }
            if(flag==true)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

