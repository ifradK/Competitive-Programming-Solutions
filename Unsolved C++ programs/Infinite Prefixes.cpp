#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
long long count(long long arr[], long long x, long long n)
{
    sort(arr,arr+n);
  long long *low = lower_bound(arr, arr+n, x);

  if (low == (arr + n) || *low != x)
     return 0;

  long long *high = upper_bound(low, arr+n, x);

  return high - low;
}
main()
{
    fastio;
    long long t,n,x,i,diff,number,ans1,ans2;
    cin>>t;
    while(t--)
    {
        long long zero=0,one=0,cnt0=0;
        cin>>n>>x;
        string a;
        long long arr[n];
        cin>>a;
        for(i=0; i<n; i++)
        {
            if(a[i]=='0')
            {
                zero++;
            }
            else if(a[i]=='1')
            {
                one++;
            }
            diff=zero-one;
            arr[i]=diff;
        }
        if(arr[n-1]==0 && x==0)
        {
            cout<<-1<<endl;
            continue;
        }
        if(arr[n-1]<0 && x>0)
        number=x%arr[n-1];
        long long size1 = sizeof(arr) / sizeof(arr[0]);
        ans1=count(arr, number,size1);
        ans2=count(arr, arr[n-1],size1);
        //cout<<number<<" "<<arr[n-1]<<" "<<ans1<<" "<<ans2<<endl;
        if(ans1!=ans2)
        {
            cout<<ans1+ans2<<endl;
        }
        else
        {
            cout<<ans1<<endl;
        }
    }
    return 0;
}
