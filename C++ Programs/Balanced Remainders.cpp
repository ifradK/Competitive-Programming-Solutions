#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll val,zero=0,one=0,two=0,sum,cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>val;
            if(val%3==0)
            {
                zero++;
            }
            else if(val%3==1)
            {
                one++;
            }
            else if(val%3==2)
            {
                two++;
            }
        }
        sum=(zero+one+two)/3;
        if(zero<sum)
        {
            while(1)
            {
                if(zero==sum || two<=sum)
                {
                    break;
                }
                cnt++;
                zero++;
                two--;
            }
            while(1)
            {
                if(zero==sum || one<=sum)
                {
                    break;
                }
                cnt=cnt+2;
                zero++;
                one--;
            }
        }
        if(one<sum)
        {
            while(1)
            {
                if(one==sum || zero<=sum)
                {
                    break;
                }
                cnt++;
                one++;
                zero--;
            }
            while(1)
            {
                if(one==sum || two<=sum)
                {
                    break;
                }
                cnt=cnt+2;
                one++;
                two--;
            }
        }
        if(two<sum)
        {
            while(1)
            {
                if(two==sum || one<=sum)
                {
                    break;
                }
                cnt++;
                two++;
                one--;
            }
            while(1)
            {
                if(two==sum || zero<=sum)
                {
                    break;
                }
                cnt=cnt+2;
                two++;
                zero--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
