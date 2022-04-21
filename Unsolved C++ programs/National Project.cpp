#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long t,n,g,b,ans,p,i,j;
    cin>>t;
    while(t--)
    {
        long long i=0;
        cin>>n>>g>>b;
        long a[b]={0};
        if(n<=g)
        {
            cout<<n<<endl;
            continue;
        }
        if(n%2==0)
        {
            p=n/2;
        }
        else
        {
            p=(n/2)+1;
        }
        a[0]=g;
        a[1]=g+b;
        for(i=2,j=3; ;i=i+2,j=j+2)
        {
            a[i]=a[i-1]+g;
            a[j]=a[j-1]+b;
            if(i==p)
            {
                break;
            }
        }
        if(a[i]>=n)
        {
            cout<<a[i]<<endl;
        }
        else
        {

        }
    }
    return 0;
}


//        for(i=0;i<10;i++)
//        {
//            cout<<a[i]<<" ";
//        }
