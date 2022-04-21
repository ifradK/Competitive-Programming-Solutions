#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        long long sum=0,temp;
        if(r>=n)
        {
            temp=n-1;
            sum=1+(temp*(temp+1))/2;
            cout<<sum<<endl;
        }
        else if(r<n)
        {
            temp=r;
            sum=(temp*(temp+1))/2;
            cout<<sum<<endl;
        }
    }
    return 0;
}
