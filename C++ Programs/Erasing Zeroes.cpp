#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,i,j,k;
    cin>>t;
    string a;
    while(t--)
    {
        long long cnt1=0,ans=0,first,last;
        cin>>a;
        for(i=0; i<a.size(); i++)
        {
            if(a[i]=='1')
            {
                cnt1++;
                last=i;
            }
        }
        if(cnt1<2)
        {
            cout<<0<<endl;
        }
        else
        {
            for(j=0; j<a.size(); j++)
            {
                if(a[j]=='1')
                {
                    first=j;
                    break;
                }
            }
            for(k=first; k<=last; k++)
            {
                if(a[k]=='0')
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
