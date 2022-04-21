#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long x[n],arr1[n],arr2[n+1],ans=0;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>p;
        }
        sort(x,x+n);
        for(i=0;i<n;i++)
        {
            arr1[i]=upper_bound(x,x+n,x[i]+k)-x-i;
        }
        arr2[n]=0;
        for(i=n-1;i>=0;i--)
        {
            arr2[i]=max(arr2[i+1],arr1[i]);
        }
        for(i=0;i<n;i++)
        {
            ans=max(ans,arr1[i]+arr2[i+arr1[i]]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
