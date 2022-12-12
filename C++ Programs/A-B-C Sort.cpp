#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool flag=false;
        ll a[n],temp;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n%2==0){temp=0;}
        else{temp=1;}
        for(i=n-1; i>=temp; i=i-2)
        {
            if(a[i]<a[i-1])
            {
                swap(a[i],a[i-1]);
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                flag=true;
                break;
            }
        }
        if(flag)
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
