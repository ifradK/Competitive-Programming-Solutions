#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,val;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+1];
        memset(a,0,sizeof(a));
        vector<long long> v;
        for(i=0;i<2*n;i++)
        {
            cin>>val;
            if(a[val]==0)
            {
                v.push_back(val);
                a[val]=1;
            }
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
