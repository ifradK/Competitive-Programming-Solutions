#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

bool solve1(long long n)
{
    if(n<2020)
    {
        return false;
    }
    if(n%2021==0)
    {
        return true;
    }
    if(n%2020==0)
    {
        return true;
    }
    solve1(n-2020);
}

bool solve2(long long n)
{
    if(n<2021)
    {
        return false;
    }
    if(n%2021==0)
    {
        return true;
    }
    if(n%2020==0)
    {
        return true;
    }
    solve2(n-2021);
}

int main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(solve1(n)==false && solve2(n)==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

