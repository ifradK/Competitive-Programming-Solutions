#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    unsigned long long n,t,weeks,rem,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        weeks=n/7;
        rem=n%7;
        ans=weeks*9;
        if(rem==1)
        {
            ans=ans+1;
        }
        else if(rem==1)
        {
            ans=ans+1;
        }
        else if(rem==2)
        {
            ans=ans+2;
        }
        else if(rem==3)
        {
            ans=ans+3;
        }
        else if(rem==4)
        {
            ans=ans+5;
        }
        else if(rem==5)
        {
            ans=ans+7;
        }
        else if(rem==6)
        {
            ans=ans+8;
        }
        cout<<ans<<endl;
    }
    return 0;
}
