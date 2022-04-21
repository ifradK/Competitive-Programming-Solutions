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
        long long a[n],mx=-1,cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==mx)
            {
                cnt++;
            }
        }
        if(cnt<n)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }
}
