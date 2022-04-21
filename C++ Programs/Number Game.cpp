#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

bool isPrime(long long n)
{
    if(n==1)
    {
        return false;
    }
    if(n <= 3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    for(long long i=5; i*i<=n; i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}

bool isPowerOfTwo(long long n)
{
    if(n==0)
    {
        return false;
    }
    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    fastio;
    long long t,n,i,cnt=0,temp1;
    bool flag=false;
    cin>>t;
    while(t--)
    {
        cnt=0;
        flag=false;
        cin>>n;
        if(n==1)
        {
            cout<<"FastestFinger"<<endl;
        }
        else if(n==2)
        {
            cout<<"Ashishgup"<<endl;
        }
        else if(n%2==1)
        {
            cout<<"Ashishgup"<<endl;
        }
        else if(isPowerOfTwo(n)==true)
        {
            cout<<"FastestFinger"<<endl;
        }
        else if(n%2==0)
        {
            if(n%4==0)
            {
                cout<<"Ashishgup"<<endl;
            }
            else
            {
                temp1=n/2;
                if(isPrime(temp1)==true)
                {
                    cout<<"FastestFinger"<<endl;
                }
                else
                {
                    cout<<"Ashishgup"<<endl;
                }
            }
        }
    }
    return 0;
}
