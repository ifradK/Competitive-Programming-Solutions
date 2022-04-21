#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        multiset<long long> m;
        long long a[n], sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            m.insert(a[i]);
        }
        for(auto it=m.begin(); ; )
        {
            if(k==0)
            {
                break;
            }
            long long temp=(*it)*(-1);
            m.erase(it);
            m.insert(temp);
            it=m.begin();
            k--;
        }
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            sum=sum+(*it);
        }
        cout<<sum<<endl;
    }
    return 0;
}

