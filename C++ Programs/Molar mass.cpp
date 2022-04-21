#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

long double val(char c, ll num)
{
    if(c=='C')
    {
        return 12.01*num;
    }
    else if(c=='H')
    {
        return 1.008*num;
    }
    else if(c=='O')
    {
        return 16.00*num;
    }
    else if(c=='N')
    {
        return 14.01*num;
    }
}

int main()
{
    fastio;
    ll t,i;
    cin>>t;
    while(t--)
    {
        long double ans=0;
        string str;
        cin>>str;
        for(i=0;i<str.size(); )
        {
            ll num=0;
            if(str[i]>='A' && str[i]<='Z')
            {
                if(i+1<str.size() && str[i+1]>='0' && str[i+1]<='9')
                {
                    num=str[i+1]-'0';
                    if(i+2<str.size() && str[i+2]>='0' && str[i+2]<='9')
                    {
                        num=num*10;
                        num=num+(str[i+2]-'0');
                        ans=ans+val(str[i],num);
                        i=i+3;
                    }
                    else
                    {
                        ans=ans+val(str[i],num);
                        i=i+2;
                    }
                }
                else
                {
                    ans=ans+val(str[i],1);
                    i++;
                }
            }
        }
        cout<<fixed<<setprecision(3)<<ans<<endl;
    }
    return 0;
}
