#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+1],b[n+2]={0},sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[n-1]<0)
        {
            a[n]=5;
        }
        else
        {
            a[n]=-5;
        }
        long long maxpos=0,minneg=0,j=0,i=0;
        while(i<n+1)
        {
            if(a[i]>0)
            {
                b[j]=minneg;
                minneg=0;
                j++;
                maxpos=max(maxpos,a[i]);
                i++;
            }
            else if(a[i]<0)
            {
                b[j]=maxpos;
                maxpos=0;
                j++;
                if(a[i]>minneg && minneg!=0)
                {
                    minneg=a[i];
                }
                else if(minneg==0)
                {
                    minneg=a[i];
                }
                i++;
            }
        }
        for(i=0;i<=n+1;i++)
        {
            sum=sum+b[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
