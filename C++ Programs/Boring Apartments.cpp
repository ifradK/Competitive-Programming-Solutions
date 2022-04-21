#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>x;
        ans=10*((x%10)-1);
        string a=to_string(x);
        if(a.size()==1){ans=ans+1;}
        else if(a.size()==2){ans=ans+3;}
        else if(a.size()==3){ans=ans+6;}
        else if(a.size()==4){ans=ans+10;}
        cout<<ans<<endl;
    }
    return 0;
}
