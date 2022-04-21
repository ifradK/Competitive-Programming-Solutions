#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],b[n],c[n],d[n],mn_a=LONG_MAX,mn_b=LONG_MAX,ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mn_a=min(mn_a,a[i]);
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            mn_b=min(mn_b,b[i]);
        }
        for(i=0;i<n;i++)
        {
            c[i]=a[i]-mn_a;
            d[i]=b[i]-mn_b;
        }
        for(i=0;i<n;i++)
        {
            ans=ans+max(c[i],d[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
