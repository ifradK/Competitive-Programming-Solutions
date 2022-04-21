#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<long long> v;

void factors(long long n, long long val)
{
    for(long long i=1;i<=n;i++)
    {
        if(i>n)
        {
            return;
        }
        if(n%i==0 && i<=val)
        {
            v.push_back(i);
        }
    }
}

int main()
{
    fastio;
    long long t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],sum=0,op=INT_MAX,cnt,temp,ans=0,temp1;
        bool flag,flag1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        factors(sum,n);
        for(i=0;i<v.size();i++)
        {
            temp=sum/v[i];
            flag=false;
            ans=0;
            temp1=-1;
            for(j=0;j<v[i];j++)
            {
                cnt=0;
                flag1=false;
                for(k=temp1+1;k<n;k++)
                {
                    temp1=k;
                    cnt=cnt+a[k];
                    ans++;
                    if(cnt==temp)
                    {
                        ans--;
                        break;
                    }
                    else if(cnt>temp)
                    {
                        flag1=true;
                        break;
                    }
                }
                if(flag1==true)
                {
                    break;
                }
                if(j==v[i]-1 && flag1==false)
                {
                    flag=true;
                }
            }
            if(flag==true)
            {
                op=min(op,ans);
            }
        }
        cout<<op<<endl;
        v.clear();
    }
    return 0;
}
/*
1
3
2 3 1
*/
