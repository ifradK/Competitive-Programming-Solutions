#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long len;
    string str;
    cin>>str;
    len=str.size();
    cout<<3<<endl;
    cout<<"L 2"<<endl;
    cout<<"R 2"<<endl;
    cout<<"R "<<2*len-1<<endl;
    return 0;
}
