#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
main()
{
    int n,m,a,i,b,c;
    cin>>n>>m;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    c=*max_element(v.begin(),v.end());

    auto upper=upper_bound(v.begin(),v.end(),c)-1-v.begin();
    //cout<<upper-v.begin()+1<<endl;
    cout<<upper+1<<endl;
    b=max_element(v.begin(),v.end())-v.begin();
    cout<<c<<endl;
    cout<<b<<endl;
    /*for(i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }*/
    return 0;
}
/*
5 2
12 23 2 44 6
7 2
1 1 2 2 3 3 4
*/
