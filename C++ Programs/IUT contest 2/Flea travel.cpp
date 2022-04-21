#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,i,sum,pos;
    cin>>n;
    int a[n]={0};
    sum=0;
    a[0]=1;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        pos=sum%n;
        a[pos]=1;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
