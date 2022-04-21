#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

#define mod 1000000007

long long N,a[1010][1010],b[1010][1010],c[1010][1010];

bool freivald()
{
    long long i,j,r[N]= {0},br[N]= {0},cr[N]= {0},abr[N]= {0};
    for(i=0; i<N; i++)
    {
        r[i]=rand()%2;
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            br[i]=(br[i]%mod + (((b[i][j]%mod)*(r[j]%mod))%mod)%mod)%mod;
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            abr[i]=(abr[i]%mod + (((a[i][j]%mod)*(br[j]%mod))%mod)%mod)%mod;
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            cr[i]=(cr[i]%mod + (((c[i][j]%mod)*(r[j]%mod))%mod)%mod)%mod;
        }
    }

    for(i=0; i<N; i++)
    {
        if(abr[i]!=cr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fastio;
    long long n,i,j,k=5;
    cin>>n;
    N=n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
            a[i][j]=a[i][j]%mod;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>b[i][j];
            b[i][j]=b[i][j]%mod;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>c[i][j];
        }
    }
    for(i=0; i<k; i++)
    {
        if(freivald()==false)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
