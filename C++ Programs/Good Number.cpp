#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    string str;
    int n,k,cnt=0,flag;
    cin>>n>>k;
    long a[n];
    for(int i=0;i<n;i++)
    {
        flag=0;
        cin>>a[i];
        str=to_string(a[i]);
        sort(str.begin(),str.end());
        for(int j=0;j<=k;j++)
        {
            if(binary_search(str.begin(),str.end(),j+48))
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

