#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll T,n,m,i,cs=1;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        ll t[n],c[m],sum=0,ans=0,pos=0;
        for(i=0;i<n;i++)
        {
            cin>>t[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>c[i];
            sum=sum+c[i];
        }
        sort(t,t+n);
        sum=sum-m;
        pos=c[0];
        ans=ans+t[pos-1];
        for(i=1;i<m;i++)
        {
            pos=pos+c[i];
            ans=ans+t[pos-1];
        }
        ans=ans+(sum*20);
        cout<<"Case "<<cs++<<": "<<ans<<endl;
    }
    return 0;
}
//10 20 30 40 50 60 = 130
//3 1 2

//10 20 30 40 50 60 = 140
//3 2 1

//60 50 40 30 20 10 = 70
// 3 2 1
