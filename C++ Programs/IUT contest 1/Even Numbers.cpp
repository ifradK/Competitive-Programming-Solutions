#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n-2;
    }
    else
    {
        cout<<n-1;
    }
    return 0;
}
