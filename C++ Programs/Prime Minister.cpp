#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,i,sum=0,alice,cnt=1,temp;
    cin>>n;
    cin>>alice;
    temp=alice;
    pair<long long, long long> a[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i].first;
        a[i].second=i+2;
        sum=sum+a[i].first;
    }
    sort(a,a+n-1);
    bool flag=false;

    for(i=0;i<n-1;i++)
    {
        if(alice>sum)
        {
            break;
        }
        if(temp>=2*a[i].first)
        {
            alice=alice+a[i].first;
            sum=sum-a[i].first;
        }
        else
        {
            flag=true;
            break;
        }
        cnt++;
    }

    if(flag==true)
    {
        cout<<0;
    }
    else
    {
        if(alice>sum)
        {
            cout<<cnt<<endl;
            cout<<1<<" ";
            for(i=0;i<cnt-1;i++)
            {
                cout<<a[i].second<<" ";
            }
        }
        else
        {
            cout<<0;
        }
    }
    return 0;
}

