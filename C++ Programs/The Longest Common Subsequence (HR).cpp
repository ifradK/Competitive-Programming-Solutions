#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int n,m,mx=INT_MIN,i,j;
    cin>>n>>m;
    int a[n+1],b[m+1],c[n+1][m+1]={0};
    vector<int> v;
    memset(c, 0, sizeof(c));
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i]==b[j])
            {
                c[i][j]=c[i-1][j-1]+1;
            }
            else
            {
                c[i][j]=max(c[i-1][j],c[i][j-1]);
            }
            if(c[i][j]>mx)
            {
                mx=c[i][j];
            }
        }
    }
    for(i=n,j=m; ; )
    {
        if(i<=0 || j<=0)
        {
            break;
        }
        if(a[i]==b[j])
        {
            v.push_back(a[i]);
            i--;
            j--;
        }
        else
        {
            if(c[i-1][j]==c[i][j])
            {
                i--;
            }
            else if(c[i][j-1]==c[i][j])
            {
                j--;
            }
        }
    }
    for(i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
