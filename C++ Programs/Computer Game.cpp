#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long binarysearch(long long start, long long end, long long a, long long b, long long n, long long k)
{
    long long mx=LONG_MIN;

    while(start<=end)
    {
        long long value=(start+end)/2;
        if((a*value)+(b*(n-value))<k)
        {
            mx=max(mx,value);
            start=value+1;
        }
        else if((a*value)+(b*(n-value))>=k)
        {
            end=value-1;
        }
    }
    return mx;
}

int main()
{
    fastio;
    long long t,n,k,a,b,temp;
    cin>>t;
    while(t--)
    {
        cin>>k>>n>>a>>b;
        temp=k/a;
        if(b*n>=k)
        {
            cout<<-1<<endl;
        }
        else if(a*n<k)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<binarysearch(0,temp,a,b,n,k)<<endl;
        }
    }
    return 0;
}
