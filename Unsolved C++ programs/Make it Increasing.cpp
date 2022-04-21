#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll n,i,j,k,cnt=9999999999999,sum=0,temp;
    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i-1;j>0;j--)
        {
            if(b[j-1]<=b[j])
            {
                temp=ceil((float)((float)b[j]-(float)b[j-1]+(float)1)/(float)b[j-1]);
                sum=sum+temp;
                b[j-1]=b[j-1]+(temp*b[j-1]);
            }
            //cout<<"B[J-1] "<<b[j-1]<<endl;
        }
        for(j=i+1;j<n-1;j++)
        {
            if(b[j+1]<=b[j])
            {
                temp=ceil((float)((float)b[j]-(float)b[j+1]+(float)1)/(float)b[j+1]);
                sum=sum+temp;
                //cout<<"TEMP "<<temp<<" "<<b[j+1]<<endl;
                b[j+1]=b[j+1]+(temp*b[j+1]);
            }
            //cout<<"B[J+1] "<<b[j+1]<<endl;
        }
        sum=sum+n-1;
        //cout<<temp<<" "<<sum<<endl;
        //cout<<"S "<<sum<<endl;
        cnt=min(cnt,sum);
        for(k=0;k<n;k++)
        {
            b[k]=a[k];
        }
    }
    cout<<cnt;
    return 0;
}
/*
5
1 2 3 4 5

10
1 1 1 1 1 1 1 1 1 1
*/
