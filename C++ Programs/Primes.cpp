#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int isprime(long long n);
main()
{
    long long n,i;
    cin>>n;
    long long m=0;
    for(i=2; i<=sqrt(n); i++)
    {
        if(isprime(i)==1)
        {
            if(isprime(n-i)==1)
            {
                cout<<i<<" "<<n-i;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
int isprime(long long n)
{
    long long i,prime=1;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    return prime;
}
