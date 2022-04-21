#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,m,cnt=0;
    cin>>n>>m;
    if(n==m)
    {
        cout<<0;
        return 0;
    }
    if(n>m)
    {
        cout<<n-m;
        return 0;
    }
    while(1)
    {
        if(n>=m)
        {
            break;
        }
        else if(m%2==0)
        {
            m=m/2;
            cnt++;
        }
        else
        {
            m++;
            cnt++;
        }
    }
    cout<<abs(cnt+n-m);
    return 0;
}
