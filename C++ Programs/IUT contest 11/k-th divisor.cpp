#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,k,i;
    cin>>n>>k;
    vector<long long> v1,v2;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i<n/i)
            {
                v1.push_back(i);
                v2.insert(v2.begin(),n/i);
            }
            else if(i==n/i)
            {
                v1.push_back(i);
            }
        }
    }
    if(v1.size()+v2.size()<k)
    {
        cout<<-1;
    }
    else
    {
        if(k<=v1.size())
        {
            cout<<v1[k-1];
        }
        else
        {
            k=k-v1.size();
            cout<<v2[k-1];
        }
    }
    return 0;
}
