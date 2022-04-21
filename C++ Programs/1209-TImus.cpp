#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

set<ll> s;

void cal()
{
    ll sum=1,cnt=2;
    while(1)
    {
        if(sum>2147484000)
        {
            break;
        }
        s.insert(sum);
        sum=sum+cnt;
        cnt++;
    }
    return;
}

int main()
{
    fastio;
    ll n,val;
    cin>>n;
    cal();
    while(n--)
    {
        cin>>val;
        if(val==1)
        {
            cout<<1<<" ";
        }
        else if(s.find(val-1)!=s.end())
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    return 0;
}
