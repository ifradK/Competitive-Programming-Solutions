#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,c0,c1,h,ans,i,cnt1,cnt0;
    string str;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>c0>>c1>>h>>str;
        if(c1>c0)
        {
            cnt1=0;
            cnt0=0;
            if(c1>h)
            {
                for(i=0; i<n; i++)
                {
                    if(str[i]=='1')
                    {
                        ans=ans+h;
                        cnt1++;
                    }
                    else
                    {
                        cnt0++;
                    }
                }
                ans=ans+(n*c0);
                cout<<min(ans,cnt1*c1+cnt0*c0)<<endl;
                continue;
            }
            else
            {
                for(i=0; i<n; i++)
                {
                    if(str[i]=='1')
                    {
                        ans=ans+c1;
                    }
                    else
                    {
                        ans=ans+c0;
                    }
                }
                cout<<ans<<endl;
                continue;
            }
        }
        if(c0>c1)
        {
            cnt1=0;
            cnt0=0;
            if(c0>h)
            {
                for(i=0; i<n; i++)
                {
                    if(str[i]=='0')
                    {
                        ans=ans+h;
                        cnt0++;
                    }
                    else
                    {
                        cnt1++;
                    }
                }
                ans=ans+(n*c1);
                cout<<min(ans,cnt1*c1+cnt0*c0)<<endl;
                continue;
            }
            else
            {
                for(i=0; i<n; i++)
                {
                    if(str[i]=='1')
                    {
                        ans=ans+c1;
                    }
                    else
                    {
                        ans=ans+c0;
                    }
                }
                cout<<ans<<endl;
                continue;
            }
        }
        if(c0==c1)
        {
            for(i=0; i<n; i++)
            {
                if(str[i]=='1')
                {
                    ans=ans+c1;
                }
                else
                {
                    ans=ans+c0;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
