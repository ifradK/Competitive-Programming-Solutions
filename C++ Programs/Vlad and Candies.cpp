#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,temp,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll> v;
        v.push_back(0);
        for(i=0;i<n;i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),greater<ll>());
        if(v[0]-v[1]>=2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
