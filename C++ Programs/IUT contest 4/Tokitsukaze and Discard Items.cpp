#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long double n,m,k;
    cin>>n>>m>>k;
    if(m<k)
    {
        cout<<m/k;
    }
    else if(m>=k)
    {
        cout<<((k-1)/k)+((1/k)*((m-k+1)/(n+m-k+1)));
    }
    return 0;
}
