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
        cin>>n;
        long long a[n],one=0,zero=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(zero>=n/2)
        {
            cout<<n/2<<endl;
            for(i=0;i<n/2;i++)
            {
                cout<<0<<" ";
            }
        }
        else
        {
            if(one%2==0)
            {
                cout<<one<<endl;
                for(i=0;i<one;i++)
                {
                    cout<<1<<" ";
                }
            }
            else
            {
                cout<<one-1<<endl;
                for(i=0;i<one-1;i++)
                {
                    cout<<1<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
