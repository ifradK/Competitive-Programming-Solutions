#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

long long a[200050];

long long binarysearch(long long start, long long end, long long val)
{
    ll temp=-1;
    while(start<=end)
    {
        long long middle=(start+end)/2;
        if(a[middle]==val)
        {
            return middle;
        }
        else if(a[middle]>val)
        {
            end=middle-1;
            temp=middle;
        }
        else if(a[middle]<val)
        {
            start=middle+1;
        }
    }
    return temp;
}


int main()
{
    fastio;
    ll t,n,q,i,query;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n,greater<ll>());
        for(i=1;i<n;i++){a[i]=a[i]+a[i-1];}
        while(q--)
        {
            cin>>query;
            ll ans=binarysearch(0,n,query);
            cout<<(ans==-1? ans:ans+1)<<endl;
        }
    }
    return 0;
}
