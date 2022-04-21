#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

bool prime[100000+3];

void SieveOfEratosthenes(long long n)
{
    memset(prime,true,sizeof(prime));
    prime[0]=false;prime[1]=false;
    for(long long p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(long long i=p*p; i<=n; i=i+p)
            {
                prime[i]=false;
            }
        }
    }
}

int main()
{
    fastio;
    long long n,i,cnt=2,j;
    cin>>n;
    SieveOfEratosthenes(n);
    long long arr[n+1];
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            arr[i]=1;
        }
        else
        {
            if(prime[i]==true)
            {
                arr[i]=cnt;
                cnt++;
            }
            else
            {
                for(j=3;j*j<=i;j=j+2)
                {
                    if(i%j==0)
                    {
                        arr[i]=arr[j];
                        break;
                    }
                }
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
