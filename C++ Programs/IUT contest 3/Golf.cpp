#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,i,num=1;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        num=num*2;
        if(num>=n)
        {
            break;
        }
    }
    cout<<i+1;
    return 0;
}
