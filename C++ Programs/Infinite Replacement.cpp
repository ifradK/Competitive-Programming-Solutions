#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

long long nCr(long long n, long long r)
{
    long long p=1,k=1;
    if (n-r<r)
    {
        r=n-r;
    }
    if (r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
            long long m =__gcd(p,k);
            p/=m;
            k/=m;
            n--;
            r--;
        }
    }
    else
    {
        p = 1;
    }
    return p;
}

int main()
{
    fastio;
    ll q,i;
    cin>>q;
    while(q--)
    {
        bool flag=false;
        string s1,s2;
        cin>>s1>>s2;
        for(i=0;i<s2.size();i++)
        {
            if(s2[i]=='a')
            {
                flag=true;
                break;
            }
        }
        if(flag==true && s2.size()>1)
        {
            cout<<-1<<endl;
        }
        else if(flag==true && s2.size()==1)
        {
            cout<<1<<endl;
        }
        else
        {
            ll cnt=s1.size();
            ll sum=0;
            while(cnt--)
            {
                sum=sum+nCr(s1.size(),cnt);
            }
            cout<<sum+1<<endl;
        }
    }
    return 0;
}
