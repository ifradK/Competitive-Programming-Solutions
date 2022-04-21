#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1 & m==1)
        {
            cout<<0<<endl;
        }
        else if((n==2 & m==1) || (n==1 & m==2))
        {
            cout<<1<<endl;
        }
        else if(n==1 || m==1)
        {
            cout<<-1<<endl;
        }
        else if(n==m)
        {
            cout<<(n-1)*2<<endl;
        }
        else if(n>m)
        {
            ll ans=(m-1)*2;
            if((n-m)%2==1)
            {
                ans=ans+((n-m)*2)-1;
            }
            else
            {
                ans=ans+((n-m)*2);
            }
            cout<<ans<<endl;
        }
        else if(n<m)
        {
            ll ans=(n-1)*2;
            if((m-n)%2==1)
            {
                ans=ans+((m-n)*2)-1;
            }
            else
            {
                ans=ans+((m-n)*2);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
