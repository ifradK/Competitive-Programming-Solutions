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
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            ll temp1=max(a[i],a[i+1]);
            ll temp2=min(a[i],a[i+1]);
            while(1)
            {
                if(temp1<=temp2*2)
                {
                    break;
                }
                temp1=ceil((double)temp1/(double)2);
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
