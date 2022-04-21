#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        char c=str[str.size()-1];

        if(c=='1' || c=='9')
        {
            cout<<1<<endl;
        }
        else if(c=='2' || c=='8')
        {
            cout<<4<<endl;
        }
        else if(c=='3' || c=='7')
        {
            cout<<9<<endl;
        }
        else if(c=='4' || c=='6')
        {
            cout<<6<<endl;
        }
        else if(c=='5')
        {
            cout<<5<<endl;
        }
        else if(c=='0')
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
