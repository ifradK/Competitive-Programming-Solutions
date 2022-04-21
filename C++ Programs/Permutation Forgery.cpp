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
        long long p[n];
        for(i=0;i<n;i++)
        {
            cin>>p[i];
        }
        for(i=n-1;i>=0;i--)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
