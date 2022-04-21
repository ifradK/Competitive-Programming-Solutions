#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

set<long long> st;

long long factors_sum(long long p)
{
    long long i,sum=0;

    for(i=2;i*i<=p;i++)
    {
        if(p%i==0)
        {
            st.insert(i);
            st.insert(p/i);
        }
    }
    for(auto it=st.begin();it!=st.end();it++)
    {
        sum=sum+(*it);
    }
    return sum;
}

long long sod(long long n)
{
    long long i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+factors_sum(i);
        st.clear();
    }
    return sum;
}

int main()
{
    fastio;
    long long t,n,cs=1,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=sod(n);
        cout<<"Case "<<cs++<<": "<<ans<<endl;
        st.clear();
    }
    return 0;
}
