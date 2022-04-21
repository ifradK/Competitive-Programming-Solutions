#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,k,i,val,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<long long> a,b,c;
        long long sum=0;
        for(i=0; i<n; i++)
        {
            cin>>val;
            a.push_back(val);
        }
        for(i=0; i<k; i++)
        {
            cin>>val;
            if(val==1 || val==2)
            {
                c.push_back(val);
            }
            else
            {
                b.push_back(val);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<long long>());
        sort(c.begin(),c.end());
        for(i=0; i<c.size(); i++)
        {
            if(c[i]==1)
            {
                sum=sum+a[a.size()-1]+a[a.size()-1];
                a.pop_back();
            }
            else if(c[i]==2)
            {
                sum=sum+a[a.size()-2]+a[a.size()-1];
                a.pop_back();
                a.pop_back();
            }
        }
        for(i=0; i<b.size(); i++)
        {
            sum=sum+a[0]+a[a.size()-1];
            a.pop_back();
            for(j=0; j<b[i]-1; j++)
            {
                a.erase(a.begin()+0);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
