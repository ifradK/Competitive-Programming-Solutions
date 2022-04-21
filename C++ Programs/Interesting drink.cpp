#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
main()
{
    long n,q,i,a;
    cin>>n;
    vector<int> x;
    for(i=0;i<n;i++)
    {
        cin>>a;
        x.push_back(a);
    }
    sort(x.begin(),x.end());
    cin>>q;
    long m[q];
    for(i=0;i<q;i++)
    {
        cin>>m[i];
        auto upper=upper_bound(x.begin(),x.end(),m[i]);
        cout<<(upper-x.begin())<<endl;
    }
    return 0;
}
