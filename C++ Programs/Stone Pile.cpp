#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

long long sol(long long arr[], long long i, long long sum_cal, long long sum_tot)
{
    if(i==0)
    {
        return abs((sum_tot-sum_cal)-sum_cal);
    }

    return min(sol(arr,i-1,sum_cal+arr[i-1],sum_tot), sol(arr,i-1,sum_cal,sum_tot));
}

int main()
{
    fastio;
    long long m,i;
    cin>>m;
    long long a[m+1],sum=0;
    for(i=1; i<=m; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sol(a,m,0,sum);
    return 0;
}
