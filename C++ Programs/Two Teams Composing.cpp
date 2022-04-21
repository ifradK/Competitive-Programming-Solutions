#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

long long mostFrequent(long long arr[], long long n)
{
    sort(arr,arr+n);

    long long max_count=1,res=arr[0],curr_count=1;
    for(long long i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1])
        {
            curr_count++;
        }
        else
        {
            if(curr_count>max_count)
            {
                max_count=curr_count;
                res=arr[i-1];
            }
            curr_count=1;
        }
    }

    if(curr_count>max_count)
    {
        max_count=curr_count;
        res=arr[n-1];
    }
    //return res for the element
    //return max_count for the number of times the element appeared
    return max_count;
}

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],similar,distinct,diff;
        set<long long> s;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        distinct=s.size()-1;
        similar=mostFrequent(a,n);
        if(distinct==similar)
        {
            cout<<similar<<endl;
        }
        else if(distinct<similar)
        {
            diff=similar-distinct;
            if(diff>1)
            {
                cout<<distinct+1<<endl;
            }
            else
            {
                cout<<distinct<<endl;
            }
        }
        else if(distinct>similar)
        {
            cout<<similar<<endl;
        }
    }
    return 0;
}



