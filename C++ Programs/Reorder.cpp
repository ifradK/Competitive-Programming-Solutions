#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        long long temp=0,m;
        cin>>n>>m;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            temp=temp+a[i];
        }
        if(temp==m)
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
