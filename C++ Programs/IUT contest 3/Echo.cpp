#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    unsigned long long t,x,ans,cs=0;
    cin>>t;
    while(t--)
    {
        cs++;
        cin>>x;
        if((x*10)%9==0)
        {
            ans=(x*10)/9;
            cout<<"Case "<<cs<<": "<<ans-1<<" "<<ans<<endl;
        }
        else
        {
            cout<<"Case "<<cs<<": "<<(x*10)/9<<endl;
        }
    }
    return 0;
}
