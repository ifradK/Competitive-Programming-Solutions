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
        long long a[n],sum=0,cnt,mx=INT_MIN;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            mx=max(mx,a[i]);
        }
        cnt=ceil((double)sum/(n-1));
        cout<<(n-1)*max(cnt,mx)-sum<<endl;
    }
    return 0;
}
