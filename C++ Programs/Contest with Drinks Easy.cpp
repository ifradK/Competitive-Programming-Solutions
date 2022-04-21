#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll n,m,i;
    cin>>n;
    ll t[n+1],p,x,sum=0,temp;
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
        sum=sum+t[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        temp=sum;
        cin>>p>>x;
        temp=temp-t[p]+x;
        cout<<temp<<endl;
    }
    return 0;
}
