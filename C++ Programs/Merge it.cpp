#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        long long cnt1=0,cnt2=0,cnt0=0;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%3==0)
            {
                cnt0++;
            }
            else if(a[i]%3==1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        if(cnt1<cnt2)
        {
            cnt0=cnt0+cnt1;
            cnt2=cnt2-cnt1;
            cnt0=cnt0+floor(cnt2/3);
        }
        else
        {
            cnt0=cnt0+cnt2;
            cnt1=cnt1-cnt2;
            cnt0=cnt0+floor(cnt1/3);
        }
        cout<<cnt0<<endl;
    }
    return 0;
}
