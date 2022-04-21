#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    unsigned long long n;
    unsigned long long i=0,j=1;
    vector<unsigned long long> v;
    while(cin>>n)
    {
        v.push_back(n);
        sort(v.begin(),v.end());
        if(j%2==0)
        {
            i++;
            cout<<(v[i]+v[i-1])/2<<endl;
        }
        else
        {
            cout<<v[i]<<endl;
        }
        j++;
    }
    return 0;
}
