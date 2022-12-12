#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],b[n]={0},c[n]={0},temp1=-1,temp2=-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        b[0]=a[0];
        for(i=1;i<n;i++)
        {
            b[i]=b[i-1]+a[i];
        }
        c[0]=a[n-1];
        for(i=1,j=n-2;i<n;i++,j--)
        {
            c[i]=c[i-1]+a[j];
        }
        i=0;
        j=0;
        while(1)
        {
            if(i+j>n-2)
            {
                break;
            }
            if(b[i]==c[j])
            {
                temp1=i;
                temp2=j;
                i++;
                j++;
            }
            else if(b[i]>c[j])
            {
                j++;
            }
            else if(b[i]<c[j])
            {
                i++;
            }
        }
        if(temp1==-1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<temp1+temp2+2<<endl;
        }
    }
    return 0;
}
