#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,a,b,cnt=0,temp;
    cin>>n>>a>>b;
    long long p[n+1];
    for (long long i = 1; i <= n; i++)
    {
        cin>>p[i];
    }
    while(1)
    {
        if(p[a]==0 || a==b)
        {
            break;
        }
        temp=p[a];
        p[a]=0;
        a=temp;
        cnt++;
    }
    if(a==b)
    {
        cout<<cnt;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
