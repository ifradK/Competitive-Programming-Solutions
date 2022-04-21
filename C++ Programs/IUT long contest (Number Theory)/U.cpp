#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void factorize(long long n)
{
    vector<pair<long long, long long>> res;
    long long cnt1=0,i;
    cout<<n<<" = ";
    for(i=2; i*i<=n; i++)
    {
        bool flag=false;
        while(n%i==0)
        {
            cnt1++;
            flag=true;
            n=n/i;
        }
        if(flag==true)
        {
            if(cnt1>1)
            {
                cout<<i<<"^"<<cnt1;
            }
            else
            {
                cout<<i;
            }
            if(n!=1)
            {
                cout<<" * ";
            }
            cnt1=0;
        }
    }
    if (n!=1)
    {
        cout<<n;
    }
    return;
}

bool isPrime(long long n)
{
    if(n==1){return false;}
    if(n <= 3){return true;}
    if(n%2==0 || n%3==0){return false;}
    for(long long i=5; i*i<=n; i=i+6)
    {
        if(n%i==0 || n%(i+2)==0){return false;}
    }
    return true;
}

int main()
{
    fastio;
    long long t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cnt=1;
        cin>>n;
        if(isPrime(n)==true)
        {
            cout<<n<<" = "<<n<<endl;
            continue;
        }
        factorize(n);
        cout<<endl;
    }
    return 0;
}
