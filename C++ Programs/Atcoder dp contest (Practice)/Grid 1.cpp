#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long h,w,i,j,mod=1e9+7;
    cin>>h>>w;
    string a[h];
    long long matrix[h+1][w+1]={0};
    memset(matrix,0,sizeof(matrix));
    for(i=0;i<h;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            if(i==0 && j==0)
            {
                matrix[i+1][j+1]=1;
            }
            else if(a[i][j]=='.')
            {
                matrix[i+1][j+1]=((matrix[i][j+1]%mod)+(matrix[i+1][j]%mod))%mod;
            }
            else if(a[i][j]=='#')
            {
                matrix[i+1][j+1]=0;
            }
        }
    }
    cout<<matrix[h][w]%mod;
    return 0;
}
