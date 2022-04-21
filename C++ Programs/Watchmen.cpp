#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

long long nCr(long long n, long long r)
{
    long long p=1,k=1;
    if (n-r<r)
    {
        r=n-r;
    }
    if (r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
            long long m =__gcd(p,k);
            p/=m;
            k/=m;
            n--;
            r--;
        }
    }
    else
    {
        p = 1;
    }
    return p;
}

int main()
{
    fastio;
    long long i,n,x,y,a=1,b=1,same=1,suma=0,sumb=0,sum_same=0;
    cin>>n;
    pair<long long,long long> p[n],p1[n];
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        p[i].first=x;
        p[i].second=y;
        p1[i].first=y;
        p1[i].second=x;
    }
    sort(p,p+n);
    sort(p1,p1+n);
    for(i=0; i<n-1; i++)
    {
        if(p[i].first==p[i+1].first && p[i].second==p[i+1].second)
        {
            same++;
        }
        else
        {
            if(same>1)
            {
                sum_same=sum_same+nCr(same,2);
            }
            same=1;
        }
        if(p[i].first==p[i+1].first)
        {
            a++;
        }
        if(p[i].first!=p[i+1].first)
        {
            if(a>1)
            {
                suma=suma+nCr(a,2);
            }
            a=1;
        }
        if(p1[i].first==p1[i+1].first)
        {
            b++;
        }
        if(p1[i].first!=p1[i+1].first)
        {
            if(b>1)
            {
                sumb=sumb+nCr(b,2);
            }
            b=1;
        }
    }
    if(same>1)
    {
        sum_same=sum_same+nCr(same,2);
    }
    if(a>1)
    {
        suma=suma+nCr(a,2);
    }
    if(b>1)
    {
        sumb=sumb+nCr(b,2);
    }
    cout<<suma+sumb-sum_same;
    return 0;
}





// *********THIS ONE IS ALSO CORRECT********

/*#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i,n,x,y,a=1,b=1,same=1,suma=0,sumb=0,sum_same=0;
    cin>>n;
    pair<long long,long long> p[n],p1[n];
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        p[i].first=x;
        p[i].second=y;
        p1[i].first=y;
        p1[i].second=x;
    }
    sort(p,p+n);
    sort(p1,p1+n);
    for(i=0; i<n-1; i++)
    {
        if(p[i].first==p[i+1].first && p[i].second==p[i+1].second)
        {
            same++;
        }
        else
        {
            if(same>1)
            {
                sum_same=sum_same+((same*(same-1))/2);
            }
            same=1;
        }
        if(p[i].first==p[i+1].first)
        {
            a++;
        }
        if(p[i].first!=p[i+1].first)
        {
            if(a>1)
            {
                suma=suma+((a*(a-1))/2);
            }
            a=1;
        }
        if(p1[i].first==p1[i+1].first)
        {
            b++;
        }
        if(p1[i].first!=p1[i+1].first)
        {
            if(b>1)
            {
                sumb=sumb+((b*(b-1))/2);
            }
            b=1;
        }
    }
    if(same>1)
    {
        sum_same=sum_same+((same*(same-1))/2);
    }
    if(a>1)
    {
        suma=suma+((a*(a-1))/2);
    }
    if(b>1)
    {
        sumb=sumb+((b*(b-1))/2);
    }
    cout<<suma+sumb-sum_same;
    return 0;
}*/
