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
        long long a[n],zero=0,one=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0 && a[i]%2==1)
            {
                zero++;
            }
            else if(i%2==1 && a[i]%2==0)
            {
                one++;
            }
        }

        if(one==zero)
        {
            cout<<one<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
