#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long double t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        if((a-b)*n>(c+d) || (a+b)*n<(c-d))
        {
            cout<<"No"<<endl;
        }
        else if(((a-b)*n>=(c-d) && (a-b)*n<=(c+d))   ||   ((a+b)*n>=(c-d) && (a+b)*n<=(c+d)))
        {
            cout<<"Yes"<<endl;
        }
        else if((a-b)*n<(c-d))
        {
            if((a+b)*n>=(c-d))
            {
                cout<<"Yes"<<endl;
            }
        }
        else if((a+b)*n>(c+d))
        {
            if((a-b)*n<=(c+d))
            {
                cout<<"Yes"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
