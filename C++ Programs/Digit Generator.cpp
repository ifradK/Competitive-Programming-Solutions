#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans=0,temp=n,i;
        while(1)
        {
            ll sum=temp;
            string str=to_string(temp);
            for(i=0;i<str.size();i++)
            {
                sum=sum+(str[i]-'0');
            }
            if(sum==n)
            {
                ans=temp;
            }
            else if(sum+(str.size()*9)<n || temp<0)
            {
                break;
            }
            temp--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
