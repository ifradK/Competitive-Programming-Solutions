#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],mn=LLONG_MAX,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        for(i=0;i<n;i++){a[i]=a[i]-mn;}
        for(i=0;i<n;i++){sum=sum+a[i];}
        cout<<sum<<endl;
    }
    return 0;
}
