#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long temp2=1;

int main()
{
    fastio;
    long long n,m,k,i,j,sum=0,temp,flag,p=0;
    cin>>n>>m>>k;
    long long a[n];
    multiset<long long, greater<long long>> st,st1;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    for(auto it=st.begin();p<m*k;it++)
    {
        st1.insert(*it);
        sum=sum+(*it);
        p++;
    }
    cout<<sum<<endl;
    temp=0;
    for(i=0; i<n; i++)
    {
        if(st1.find(a[i])!=st1.end())
        {
            auto flag=st1.find(a[i]);
            st1.erase(flag);
            temp++;
        }
        if(temp!=0 && temp%m==0 && temp2<k)
        {
            cout<<i+1<<" ";
            temp=0;
            temp2++;
        }
    }
    return 0;
}
