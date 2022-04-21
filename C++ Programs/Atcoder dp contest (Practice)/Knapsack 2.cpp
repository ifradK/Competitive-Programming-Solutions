#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,w,i,j;
    cin>>n>>w;
    long long value[n+1],weight[n+1],total_val=0,ans=0;
    for(i=1;i<=n;i++)
    {
        cin>>weight[i]>>value[i];
        total_val=total_val+value[i];
    }
    long long matrix[n+1][total_val+1];
    memset(matrix,-1,sizeof(matrix));
    for(i=0;i<=n;i++)
    {
        matrix[i][0]=w;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=total_val;j++)
        {
            if(value[i]>j)
            {
                matrix[i][j]=matrix[i-1][j];
            }
            else
            {
                matrix[i][j]=max(matrix[i-1][j-value[i]]-weight[i], matrix[i-1][j]);
            }

            if(matrix[i][j]>=0)
            {
                ans=max(ans,j);
            }
        }
    }
    cout<<ans;
    return 0;
}
