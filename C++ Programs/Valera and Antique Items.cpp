#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    vector<int> b;
    long n,v,i,j,k,cnt=0;
    cin>>n>>v;
    for(i=0;i<n;i++)
    {
        cin>>k;
        int a[k];
        for(j=0;j<k;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<k;j++)
        {
            if(a[j]<v)
            {
                cnt++;
                b.push_back(i+1);
                break;
            }
        }
    }
    cout<<cnt<<endl;
    for(i=0;i<cnt;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
