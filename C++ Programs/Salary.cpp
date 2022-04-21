#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
main()
{
    fastio;
    long double t,b1,p1,b2,p2,ans1,ans2;
    cin>>t;
    while(t--)
    {
        cin>>b1>>p1>>b2>>p2;
        ans1=p1*log10(b1);
        ans2=p2*log10(b2);
        if(ans1>ans2)
        {
            cout<<"HaHa"<<endl;
        }
        else if(ans2>ans1)
        {
            cout<<"Congrats"<<endl;
        }
        else if(ans2==ans1)
        {
            cout<<"Lazy"<<endl;
        }
    }
    return 0;
}
