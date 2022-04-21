#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long n;
    double sum=0,i;
    cin>>n;
    for(i=n;i>0;i--)
    {
        sum=sum+(1/i);
    }
    cout<<setprecision(12)<<fixed<<sum;
    return 0;
}
