#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,a[61];
    a[1]=0;
    a[2]=2;
    for(long long i=3;i<=60;i++)
    {
        if(i%2==1)
        {
            a[i]=0;
        }
        else
        {
            a[i]=2*a[i-2];
        }
    }
    cin>>n;
    cout<<a[n];
    return 0;
}
