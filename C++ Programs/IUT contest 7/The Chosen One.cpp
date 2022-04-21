#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i,t,n,k,d,cs=1,pos;
    cin>>t;
    while(t--)
    {
        long long cnt=0,flag=0;
        string str;
        vector<long long> v;
        map<long long, string> mp;
        cin>>n>>k>>d;
        for(i=0;i<n;i++)
        {
            cin>>str;
            mp[cnt++]=str;
        }
        pos=((d-1)*k)%n;
        cout<<"Case #"<<cs++<<": ";
        for(i=pos; ;i++)
        {
            if(flag==k)
            {
                break;
            }
            if(i==n)
            {
                i=0;
            }
            v.push_back(i);
            flag++;
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<mp[v[i]]<<" ";
        }
        cout<<endl;
        mp.clear();
        v.clear();
    }
    return 0;
}
