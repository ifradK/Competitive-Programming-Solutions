#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double a[n];
        set<double> s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                s.insert(fabs((a[i]-a[j])/2));
            }
        }
        cout<<s.size()<<endl;
        s.clear();
    }
    return 0;
}
