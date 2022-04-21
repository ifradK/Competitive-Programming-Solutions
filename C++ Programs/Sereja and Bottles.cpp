#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,j,cnt=0;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(b[i]==a[j])
                {
                    a[j]=0;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
