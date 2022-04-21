#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long solve1(long long a[], long long n, long long val)
{
    long long start=0, End=n-1, middle;
    while(start<=End)
    {
        middle=(start+End)/2;
        if(a[middle]==val)
        {
            return a[middle];
        }
        else if(a[middle]>val)
        {
            End=middle-1;
        }
        else if(a[middle]<val)
        {
            start=middle+1;
        }
    }
    if(End<0)
    {
        return -1;
    }
    else
    {
        return a[End];
    }
}

long long solve2(long long a[], long long n, long long val)
{
    long long start=0, End=n-1, middle;
    while(start<=End)
    {
        middle=(start+End)/2;
        if(a[middle]==val)
        {
            return a[middle];
        }
        else if(a[middle]>val)
        {
            End=middle-1;
        }
        else if(a[middle]<val)
        {
            start=middle+1;
        }
    }
    if(start>n-1)
    {
        return -1;
    }
    else
    {
        return a[start];
    }
}

int main()
{
    long long n,q,i,val;
    scanf("%lld",&n);
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    scanf("%lld",&q);
    while(q--)
    {
        scanf("%lld",&val);
        long long temp=solve1(a,n,val-1);
        if(temp==-1)
        {
            printf("X ");
        }
        else
        {
            printf("%lld ",temp);
        }
        temp=solve2(a,n,val+1);
        if(temp==-1)
        {
            printf("X\n");
        }
        else
        {
            printf("%lld\n",temp);
        }
    }
    return 0;
}

