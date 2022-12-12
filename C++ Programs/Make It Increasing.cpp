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
        ll a[n],cnt=0;
        bool flag=false;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=n-1;i>0;i--)
        {
            while(a[i]<=a[i-1])
            {
                if(a[i-1]==0)
                {
                    break;
                }
                a[i-1]=a[i-1]/2;
                cnt++;
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                flag=true;
            }
        }
        cout<<(flag==false?cnt:-1)<<endl;
    }
    return 0;
}
