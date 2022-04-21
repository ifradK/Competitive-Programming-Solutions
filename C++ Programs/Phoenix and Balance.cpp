#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i,t,n,a[35],sum1=0,sum2=0,k,j;
    cin>>t;
    for(i=1; i<=30; i++)
    {
        a[i]=pow(2,i);
    }
    while(t--)
    {
        sum1=0;
        sum2=0;
        cin>>n;
        sum1=sum1+a[n];
        for(i=1; i<n/2; i++)
        {
            sum1=sum1+a[i];
        }
        j=i;
        for(i=1; i<=n/2; i++)
        {
            sum2=sum2+a[j];
            j++;
        }
        cout<<abs(sum1-sum2)<<endl;
    }
    return 0;
}
