#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long double a,b,c,ans;
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ans=(a*b*c)/(a*b+b*c+a*c+2.0*sqrt(a*b*c*(a+b+c)));
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
    return 0;
}
