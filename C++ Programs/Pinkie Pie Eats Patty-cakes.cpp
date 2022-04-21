#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+1],mx=INT_MIN,cnt=0,val,temp=0;
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            cin>>val;
            a[val]++;
        }
        sort(a,a+n+1,greater<long long>());
        mx=a[0];
        for(i=1;i<=n;i++)
        {
            if(a[i]==0)
            {
                break;
            }
            if(a[i]==mx || a[i]==mx-1)
            {
                cnt++;
            }
            else if(a[i]!=mx-1)
            {
                temp=temp+a[i];
            }
        }
        cout<<cnt+(temp/(mx-1))<<endl;
    }
    return 0;
}
