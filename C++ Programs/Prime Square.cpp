#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

bool prime[20010];

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
    SieveOfEratosthenes(19999);
    long long t,n,i,j,a[10]={4,6,8,9,10,12,14,15,16,18};
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long matrix[n][n],diff,temp,num;
        bool flag=false;
        for(i=0;i<10;i++)
        {
            if(flag==true)
            {
                break;
            }
            temp=a[i]*(n-1);
            for(j=temp+1;j<20000;j++)
            {
                if(prime[j]==true)
                {
                    diff=j-temp;
                    if(isPrime(diff)==false)
                    {
                        num=a[i];
                        flag=true;
                        break;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    matrix[i][j]=diff;
                }
                else
                {
                    matrix[i][j]=num;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
