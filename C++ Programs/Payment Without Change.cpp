#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    long long q,a,b,n,s,coina;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>n>>s;
        coina=s/n;
        if(coina>=a)
        {
            if((a*n)+b>=s)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(coina<a)
        {
            if((coina*n)+b>=s)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
