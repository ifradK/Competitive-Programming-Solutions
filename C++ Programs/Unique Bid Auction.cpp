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
        long long a[n+2],idx;
        map<long long, long long> mp;
        bool flag=false;
        a[0]=-1;
        a[n+1]=n+10;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]=i;
        }
        sort(a,a+n+2);
        for(i=1;i<=n;i++)
        {
            if(a[i-1]!=a[i] && a[i]!=a[i+1])
            {
                flag=true;
                idx=mp[a[i]];
                break;
            }
        }
        if(flag==true)
        {
            cout<<idx<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
