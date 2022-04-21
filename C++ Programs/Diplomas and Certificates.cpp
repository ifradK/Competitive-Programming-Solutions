#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,k,temp;
    cin>>n>>k;
    temp=(n/2)/(k+1);
    cout<<temp<<" "<<temp*k<<" "<<n-temp-(temp*k);
    return 0;
}
