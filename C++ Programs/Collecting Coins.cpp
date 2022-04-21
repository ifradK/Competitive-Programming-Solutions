#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long t,a,b,c,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        long long arr[3]={0},one,two,ans;
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        sort(arr,arr+3,greater<long long>());
        one=arr[0]-arr[1];
        two=arr[0]-arr[2];
        ans=n-one-two;
        if(ans<0 && ans%3==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(ans%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
