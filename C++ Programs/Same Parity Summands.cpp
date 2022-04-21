#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i,val;
    cin>>t;
    while(t--)
    {
        bool flag1=false,flag2=false;
        cin>>n>>k;
        if(k>n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n%k==0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k;i++)
            {
                cout<<n/k<<" ";
            }
            cout<<endl;
            continue;
        }
        if(n%2==0)
        {
            val=(k-1)*2;
            if((n-val)%2==0 && (n-val)>0)
            {
                cout<<"YES"<<endl;
                for(i=0;i<k-1;i++)
                {
                    cout<<2<<" ";
                }
                cout<<n-val<<endl;
                continue;
            }
            val=(k-1);
            if((n-val)%2==1 && (n-val)>0)
            {
                cout<<"YES"<<endl;
                for(i=0;i<k-1;i++)
                {
                    cout<<1<<" ";
                }
                cout<<n-val<<endl;
                continue;
            }
        }
        if(n%2==1)
        {
            val=(k-1);
            if((n-val)%2==1 && (n-val)>0)
            {
                cout<<"YES"<<endl;
                for(i=0;i<k-1;i++)
                {
                    cout<<1<<" ";
                }
                cout<<n-val<<endl;
                continue;
            }
            val=(k-1)*2;
            if((n-val)%2==0 && (n-val)>0)
            {
                cout<<"YES"<<endl;
                for(i=0;i<k-1;i++)
                {
                    cout<<2<<" ";
                }
                cout<<n-val<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
