#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

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
    long long i,n,num1,num2;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        if(isPrime(n)==true)
        {
            cout<<0<<endl;
        }
        else
        {
            for(i=n+1; ;i++)
            {
                if(isPrime(i)==true)
                {
                    num2=i;
                    break;
                }
            }
            for(i=n-1; ;i--)
            {
                if(isPrime(i)==true)
                {
                    num1=i;
                    break;
                }
            }
            cout<<num2-num1<<endl;
        }
    }
    return 0;
}
