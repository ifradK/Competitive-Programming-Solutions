#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,m,n,i,j,cs=0,ans=0;
    cin>>t;
    while(t--)
    {
        ans=0;
        cs++;
        cin>>m>>n;
        long long sum[m]={0};
        long long a[m][n];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                sum[i]=sum[i]+a[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            ans=ans^sum[i];
        }
        if(ans==0)
        {
            cout<<"Case "<<cs<<": "<<"Bob"<<endl;
        }
        else
        {
            cout<<"Case "<<cs<<": "<<"Alice"<<endl;
        }
    }
    return 0;
}
