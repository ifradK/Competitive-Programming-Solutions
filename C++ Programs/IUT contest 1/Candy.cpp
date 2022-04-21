#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,i,p,cnt,sum,avg,left,total;
    while(1)
    {
        total=0;
        sum=0;
        cnt=0;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        avg=sum/n;
        left=sum%n;
        if(left!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>avg)
                {
                    total=total+(a[i]-avg);
                }
            }
            cout<<total<<endl;
        }
    }
    return 0;
}
