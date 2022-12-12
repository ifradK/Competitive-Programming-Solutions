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
        string s;
        cin>>s;
        ll sum=0;
        for(i=0; i<s.size(); i++)
        {
            sum=sum+(s[i]-'a'+1);
        }
        if(s.size()==1)
        {
            cout<<"Bob "<<sum<<endl;
        }
        else if(s.size()%2==0)
        {
            cout<<"Alice "<<sum<<endl;
        }
        else
        {
            if(s[0]>=s[s.size()-1])
            {
                sum=sum-(s[s.size()-1]-'a'+1);
                cout<<"Alice "<<sum-(s[s.size()-1]-'a'+1)<<endl;
            }
            else
            {
                sum=sum-(s[0]-'a'+1);
                cout<<"Alice "<<sum-(s[0]-'a'+1)<<endl;
            }
        }
    }
    return 0;
}
