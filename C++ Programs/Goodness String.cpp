#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,cs=1,i,n,k,j;
    cin>>t;
    while(t--)
    {
        string str;
        ll cnt=0,ans;
        cin>>n>>k>>str;
        for(i=0,j=n-1; i<n/2; i++,j--)
        {
            if(str[i]!=str[j])
            {
                cnt++;
            }
        }
        if(cnt==k)
        {
            ans=0;
        }
        else
        {
            ans=abs(k-cnt);
        }
        cout<<"Case #"<<cs++<<": "<<ans<<endl;
    }
    return 0;
}
