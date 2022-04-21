#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,x,sum,cnt,i;
    cin>>t;
    while(t--)
    {
        long long arr[1000]={0};
        cin>>x;
        arr[0]=1;
        arr[1]=3;
        sum=7;
        cnt=1;
        if(sum>x)
        {
            cout<<cnt<<endl;
            continue;
        }
        i=2;
        while(1)
        {
            if(sum>x)
            {
                break;
            }
            cnt++;
            arr[i]=arr[i-1]+(arr[i-1]-arr[i-2])*2;
            sum=sum+(arr[i]*(arr[i]+1))/2;
            i++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
//1000000000000000000
