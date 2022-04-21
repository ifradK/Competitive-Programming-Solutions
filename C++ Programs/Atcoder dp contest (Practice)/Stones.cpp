#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,k,i,j,mn=INT_MAX;
    cin>>n>>k;
    long long a[n],dp[k+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    for(i=0; i<=k; i++)
    {
        bool flag=false;
        if(i<mn)
        {
            dp[i]=0;
        }
        else
        {
            for(j=0; j<n; j++)
            {
                if(i-a[j]>=0 && dp[i-a[j]]==0)
                {
                    flag=true;
                    dp[i]=1;
                    break;
                }
            }
            if(flag==false)
            {
                dp[i]=0;
            }
        }
    }
    if(dp[k]==1)
    {
        cout<<"First";
    }
    else
    {
        cout<<"Second";
    }
    return 0;
}
