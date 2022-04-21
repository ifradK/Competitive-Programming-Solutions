#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        ll len=n.size()-1, mn=INT_MAX;
        for(j=len;j>0;j--)
        {
            for(i=j-1;i>=0;i--)
            {
                if((n[i]=='2' && n[j]=='5') || (n[i]=='5' && n[j]=='0') || (n[i]=='7' && n[j]=='5') || (n[i]=='0' && n[j]=='0'))
                {
                    ll diff=(j-i-1)+(len-j);
                    mn=min(diff,mn);
                }
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
