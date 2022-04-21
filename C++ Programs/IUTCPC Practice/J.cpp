#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t;
    long double x1,x2,y1,y2,ans;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        ans=(y1*x2+y2*x1)/(y1+y2);
        cout<<fixed<<setprecision(16)<<ans<<" "<<0.0000000000000000<<endl;
    }
    return 0;
}
