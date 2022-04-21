#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],ans=0,mn=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            ans=ans+max(a[i]-a[i+1],mn);
        }
        cout<<ans<<endl;
    }
    return 0;
}
