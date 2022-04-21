#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void Merge(long long arr[], long long l, long long m, long long r)
{
    long long left = m - l + 1;
    long long right = r - m;

    long long L[left], R[right];

    for(long long i=0; i<left; i++)
    {
        L[i]=arr[l+i];
    }
    for(long long j=0; j<right; j++)
    {
        R[j]=arr[m+1+j];
    }

    long long i = 0;
    long long j = 0;
    long long k = l;

    while (i<left && j<right)
    {
        if(L[i] <= R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while (i<left)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

    while (j<right)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(long long arr[],long long l,long long r)
{
    if(l>=r)
    {
        return;
    }
    long long m=(l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    Merge(arr,l,m,r);
}

void printArray(long long A[], long long n)
{
    long long i;
    for(i=0; i<n-1; i++)
    {
        cout<<A[i]<< " ";
    }
    cout<<A[i];
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
        long long a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        mergeSort(a,0,n-1);

        printArray(a,n);
        cout<<endl;
    }
    return 0;
}
