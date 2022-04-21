#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long a[n],mx=-10000000000000;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        for(i=0;i<n;i++)
        {
            a[i]=mx-a[i];
        }
        if(k%2==1)
        {
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            mx=-10000000000000;
            for(i=0;i<n;i++)
            {
                mx=max(mx,a[i]);
            }
            for(i=0;i<n;i++)
            {
                a[i]=mx-a[i];
            }
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
