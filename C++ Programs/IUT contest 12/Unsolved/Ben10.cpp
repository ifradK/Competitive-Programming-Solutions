#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
long long arr[4004010];
int main()
{
    fastio;
    long long t,p,l,i,r,j,cnt,sum=0,pos,mx=LONG_MIN;
    cin>>t;
    while(t--)
    {
        cin>>p;
        cin>>l;
        mx=LONG_MIN;
        for(i=0;i<l;i++)
        {
            cin>>r;
            cnt=0;
            for(j=1;j<=p;j++)
            {
                cnt=cnt+(r*j);
                arr[cnt]++;
                mx=max(mx,cnt);
            }
        }
        sum=0;
        pos=1;
        while(1)
        {
            if(sum>=p)
            {
                break;
            }
            sum=sum+arr[pos];
            pos++;
        }
        cout<<pos-1<<endl;
        for(i=0;i<=mx;i++)
        {
            arr[i]=0;
        }
    }
    return 0;
}
