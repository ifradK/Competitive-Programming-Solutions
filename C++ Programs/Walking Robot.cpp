#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long n,b,a,i,acc,batt,cnt=0;
    cin>>n>>b>>a;
    acc=a;
    batt=b;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            if(acc>0)
            {
                acc--;
            }
            else if(batt>0)
            {
                batt--;
            }
            else
            {
                break;
            }
        }
        else
        {
            if(acc==a)
            {
                acc--;
            }
            else if(batt>0)
            {
                batt--;
                acc++;
            }
            else if(acc>0)
            {
                acc--;
            }
            else
            {
                break;
            }
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}

