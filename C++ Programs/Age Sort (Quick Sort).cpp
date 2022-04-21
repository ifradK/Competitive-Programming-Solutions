#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long a[2000010];

long long Partition(long long l, long long r)
{
    long long pivot=a[l],i=l,j=r;
    while(i<j)
    {
        for(int i1=l; i1<r; i1++)
        {
            i++;
            if(a[i]>pivot)
            {
                break;
            }
        }
        for(int i1=r; i1>=0; i1--)
        {
            j--;
            if(a[j]<=pivot)
            {
                break;
            }
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[j]);
    return j;
}

void quicksort(long long l, long long r)
{
    if(l<r)
    {
        long long j=Partition(l,r);
        quicksort(l,j);
        quicksort(j+1,r);
    }
}

int main()
{
    fastio;
    long long n,i;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        a[n]=LONG_MAX;
        quicksort(0,n);
        for(i=0; i<n; i++)
        {
            cout<<a[i];
            if(i!=n-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
