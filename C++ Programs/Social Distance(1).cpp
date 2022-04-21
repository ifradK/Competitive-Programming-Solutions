#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i,m,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n]={0},sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n>=m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(a,a+n,greater<ll>());
        sum=a[0]*2+1;
        for(i=1;i<n-1;i++)
        {
            sum=sum+a[i]+1;
        }
        if(n>1)
        {
            sum=sum+1;
        }
        if(sum<=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
//1 1 3 1
