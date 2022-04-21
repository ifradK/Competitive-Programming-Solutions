#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[2*n];
        vector<pair<long long, long long>> v_even,v_odd;
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<2*n;i++)
        {
            if(a[i]%2==0)
            {
                v_even.push_back(make_pair(a[i],i+1));
            }
            else
            {
                v_odd.push_back(make_pair(a[i],i+1));
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(v_odd.size()>1)
            {
                cout<<v_odd[v_odd.size()-1].second<<" ";
                v_odd.pop_back();
                cout<<v_odd[v_odd.size()-1].second<<" ";
                v_odd.pop_back();
            }
            else
            {
                cout<<v_even[v_even.size()-1].second<<" ";
                v_even.pop_back();
                cout<<v_even[v_even.size()-1].second<<" ";
                v_even.pop_back();
            }
            cout<<endl;
        }
    }
    return 0;
}
