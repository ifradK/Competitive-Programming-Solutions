#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],cnt[105]={0};
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
        }
        bool flag=false,flag1=false;
        while(flag==false)
        {
            flag1=false;
            for(i=0;i<102;i++)
            {
                if(cnt[i]>0)
                {
                    flag1=true;
                    cnt[i]--;
                    cout<<i<<" ";
                }
            }
            if(flag1==false)
            {
                flag=true;
            }
        }
        cout<<endl;
    }
    return 0;
}
