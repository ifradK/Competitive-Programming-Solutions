#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i;
    cin>>t;
    while(t--)
    {
        string str,ans;
        cin>>str;
        ans=str;
        for(i=0;i<str.size();i++)
        {
            ll temp=str.size(),pos=i;
            string str1="";
            while(temp--)
            {
                if(pos==str.size())
                {
                    pos=0;
                }
                str1=str1+str[pos];
                pos++;
            }
            ans=min(ans,str1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
