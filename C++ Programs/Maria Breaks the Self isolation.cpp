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
        vector<long long> v;
        for(i=0;i<n;i++)
        {
            cin>>val;
            v.push_back(val);
        }
        sort(v.begin(),v.end());
        for(i=v.size()-1;i>=0;i--)
        {
            if(v[i]<=i+1)
            {
                break;
            }
            else
            {
                v.pop_back();
            }
        }
        cout<<v.size()+1<<endl;
    }
    return 0;
}
