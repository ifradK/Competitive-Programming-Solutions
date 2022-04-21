#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,i;
    long double bc,cd,ad;
    cin>>t;
    while(t--)
    {
        long double mn=LONG_MAX;
        cin>>bc>>cd>>ad;
        for(i=0;i<=bc;i++)
        {
            long double temp=sqrt((i*i)+(ad*ad)) + sqrt(((bc-i)*(bc-i)/4)+(cd*cd/4));
            cout<<temp<<endl;
            mn=min(mn,temp);
        }
        cout<<fixed<<setprecision(4)<<mn<<endl;
    }
    return 0;
}
