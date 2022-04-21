#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long long t,n,m,cnt,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long a[n],b[m];
        cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);

        for(i=0,j=0; ; )
        {
            //cout<<a[i]<<" "<<b[i]<<" "<<cnt<<endl;
            if(i>=n || j>=m)
            {
                break;
            }
            if(a[i]!=b[j])
            {
                if(a[i]>b[j])
                {
                    j++;
                }
                else
                {
                    i++;
                }
                cnt++;
            }
            else
            {
                i++;
                j++;
            }
            //cout<<cnt<<" "<<i<<" "<<j<<endl;
        }
        if(n==m)
        {
            cout<<+cnt+(n-i)+(m-j)<<endl;
        }
        else if(n!=m && n==i && m==j)
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<(n-i)+(m-j)+cnt<<endl;
        }
    }
    return 0;
}
/*
1
7 6
7 6 3 2 2 1 1
6 5 3 2 2 1
*/
