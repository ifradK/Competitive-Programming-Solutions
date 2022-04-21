#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
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

int main()
{
    fastio;
    long long n,num;
    string str;
    while(cin>>n)
    {
        str=to_string(n);
        reverse(str.begin(), str.end());
        num=stoi(str);
        if(num==n)
        {
            if(isPrime(n)==false)
            {
                cout<<n<<" is not prime."<<endl;
            }
            else
            {
                cout<<n<<" is prime."<<endl;
            }
        }
        else if(isPrime(n)==false)
        {
            cout<<n<<" is not prime."<<endl;
        }
        else if(isPrime(n)==true && isPrime(num)==true)
        {
            cout<<n<<" is emirp."<<endl;
        }
        else
        {
            cout<<n<<" is prime."<<endl;
        }
    }
    return 0;
}
