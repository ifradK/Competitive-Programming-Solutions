#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll n,q,i,t,x;
    cin>>n>>q;
    ll sum=0,a[n],temp=-1,temp1=0;
    vector<pair<ll,ll> > p;
    set<ll> s;
    for(i=0;i<n;i++){cin>>a[i];sum=sum+a[i];}
    bool flag=false;
    while(q--)
    {
        cin>>t;
        if(t==2)
        {
            cin>>x;
            flag=true;
            sum=x*n;
            temp=x;
            temp1=x;
            s.clear();
        }
        else
        {
            cin>>i>>x;
            if(flag==false){sum=sum-a[i-1]+x; a[i-1]=x;}
            else if(temp==0)
            {
                if(s.find(i-1)!=s.end())
                {
                    sum=sum-a[i-1]+x;
                    a[i-1]=x;
                }
                else
                {
                    sum=sum-temp1+x;
                    a[i-1]=x;
                }
            }
            else if(temp>0)
            {
                sum=sum-temp+x;
                a[i-1]=x;
            }
            s.insert(i-1);
            temp=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}
