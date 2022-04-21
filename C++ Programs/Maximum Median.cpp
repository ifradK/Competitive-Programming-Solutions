#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i,n,k,mid,cnt,diff;
    cin>>n>>k;
    mid=n/2;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<a[0]+k;
        return 0;
    }
    sort(a,a+n);
    cnt=0;
    for(i=mid+1;i<n;i++)
    {
        cnt++;
        diff=a[i]-a[i-1];
        if(k<cnt*diff)
        {
            a[mid]=a[mid]+(k/cnt);
            cout<<a[mid];
            return 0;
        }
        k=k-(cnt*diff);
        a[mid]=a[mid]+diff;
    }
    if(k>0)
    {
        cnt++;
        a[mid]=a[mid]+(k/cnt);
    }
    cout<<a[mid];
    return 0;
}
