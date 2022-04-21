#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long q,a[3],temp,alice,bob;
    cin>>q;
    while(q--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        alice=a[0];
        bob=a[1];
        temp=bob-alice;
        a[2]=a[2]-temp;
        if(a[2]<0)
        {
            cout<<alice+a[2]+temp<<endl;
        }
        else
        {
            cout<<bob+a[2]/2<<endl;
        }
    }
    return 0;
}
