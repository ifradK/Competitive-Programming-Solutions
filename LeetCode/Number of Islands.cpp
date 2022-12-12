#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;

vector<char> v[305];

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        for(int i=0;i<305;i++){v[i].clear();}
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                v[i].push_back(grid[i][j]);
            }
        }
        return solve(grid.size(),grid[0].size());
    }

    int solve(int n, int m)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]=='1')
                {
                    visit(i,j,n,m);
                    cnt++;
                }
            }
        }
        return cnt;
    }

    void visit(int i, int j, int n, int m)
    {
        v[i][j]='0';
        if(i-1>=0 && v[i-1][j]=='1'){visit(i-1,j,n,m);}
        if(i+1<n && v[i+1][j]=='1'){visit(i+1,j,n,m);}
        if(j-1>=0 && v[i][j-1]=='1'){visit(i,j-1,n,m);}
        if(j+1<m && v[i][j+1]=='1'){visit(i,j+1,n,m);}
    }
};

int main()
{
    int n,m;
    char a;
    //cin>>n>>m;
    vector<vector<char>> v1(4, std::vector<char>(5));
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            cin>>a;
//            v1[i].push_back(a);
//        }
//    }

    v1[0][0] = '1';
    v1[0][1] = '1';
    v1[0][2] = '0';
    v1[0][3] = '0';
    v1[0][4] = '0';


    v1[1][0] = '1';
    v1[1][1] = '1';
    v1[1][2] = '0';
    v1[1][3] = '0';
    v1[1][4] = '0';

    v1[2][0] = '0';
    v1[2][1] = '0';
    v1[2][2] = '1';
    v1[2][3] = '0';
    v1[2][4] = '0';

    v1[3][0] = '0';
    v1[3][1] = '0';
    v1[3][2] = '0';
    v1[3][3] = '1';
    v1[3][4] = '1';

    Solution s;
    cout<<s.numIslands(v1);
}






