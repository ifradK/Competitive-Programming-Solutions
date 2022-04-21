#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
bool check(long long sum, long long temp)
{
    long long total=0;
    string a=to_string(sum);
    for(long long i=0;i<a.size();i++)
    {
        total=total+a[i]-'0';
    }
    if(total==temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    fastio;
    long long a,b,c,i,sum,j;
    vector<long long> v;
    cin>>a>>b>>c;
    for(i=1;i<=81;i++)
    {
        sum=i;
        for(j=1;j<a;j++)
        {
            sum=sum*i;
        }
        sum=(sum*b)+c;
        if(sum<=0 || sum>=1000000000){continue;}
        if(check(sum,i)==true)
        {
            v.push_back(sum);
        }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
