#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<long long,long long>,string> m;
    long long n,t;
    cin>>n;
    while(n--)
    {
        pair<long long,long long> p;
        string str;
        long long val;
        cin>>val;
        p.first=val;
        cin>>val;
        p.second=val;
        cin>>str;
        m[p]=str;
    }
    cin>>t;
    while(t--)
    {
        pair<long long,long long> p1;
        long long val1;
        cin>>val1;
        p1.first=val1;
        cin>>val1;
        p1.second=val1;
        cout<<m[p1]<<endl;
    }
    return 0;
}
