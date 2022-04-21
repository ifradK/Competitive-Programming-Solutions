#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,val;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+1]={0},sum=0,current;
        for(i=0;i<n;i++)
        {
            cin>>val;
            a[val]++;
        }
        sort(a,a+n+1,greater<long long>());
        sum=a[0];
        current=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]==0)
            {
                break;
            }

            if(a[i]>=current)
            {
                current=current-1;
                if(current<0)
                {
                    break;
                }
                sum=sum+current;
            }
            else if(a[i]<current)
            {
                current=a[i];
                sum=sum+current;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
