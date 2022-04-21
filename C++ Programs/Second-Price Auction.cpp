#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
main()
{
    vector<int> v;
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(a,a+n,greater<int>());
    auto it = find(v.begin(), v.end(), a[0]);
    int index = distance(v.begin(), it);
    cout<<index+1<<" "<<a[1];
    return 0;
}
