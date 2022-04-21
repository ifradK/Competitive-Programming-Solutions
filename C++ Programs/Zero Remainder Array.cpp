#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long number;

long long mostFrequent(vector<long long> arr, long long n)
{
    long long max_count=1,res=arr[0],curr_count=1;
    for(long long i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1])
        {
            curr_count++;
        }
        else
        {
            if(curr_count>=max_count)
            {
                max_count=curr_count;
                res=arr[i-1];
                number=res;
            }
            curr_count=1;
        }
    }

    if(curr_count>=max_count)
    {
        max_count=curr_count;
        res=arr[n-1];
        number=res;
    }
    return max_count;
}

int main()
{
    fastio;
    long long t,n,k,i,val,temp,times;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<long long> a;
        for(i=0; i<n; i++)
        {
            cin>>val;
            if(val%k!=0)
            {
                temp=val/k;
                a.push_back(k*(temp+1)-val);
            }
        }

        if(a.size()==0)
        {
            cout<<0<<endl;
        }
        else if(a.size()==1)
        {
            cout<<a[a.size()-1]+1<<endl;
        }
        else
        {
            sort(a.begin(),a.end());
            number=a[0];
            times=mostFrequent(a,a.size());
            if(times>1)
            {
                times=times-1;
                cout<<(times*k)+number+1<<endl;
            }
            else
            {
                cout<<a[a.size()-1]+1<<endl;
            }
        }
    }
    return 0;
}
