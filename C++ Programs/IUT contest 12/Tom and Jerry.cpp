#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long i,len,j;
    string a;
    cin>>a;
    len=a.size();
    for(i=0;i<len;i++)
    {
        if(a[i]!='A' && a[i]!='H' && a[i]!='I' && a[i]!='M' && a[i]!='O' && a[i]!='T' && a[i]!='U' && a[i]!='V' && a[i]!='W' && a[i]!='X' && a[i]!='Y')
        {
            cout<<"NO";
            return 0;
        }
    }
    if(len%2==0)
    {
        for(i=0,j=len-1;i<len/2,j>=len/2;i++,j--)
        {
            if(a[i]!=a[j])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    else
    {
        for(i=0,j=len-1;i<len/2,j>len/2;i++,j--)
        {
            if(a[i]!=a[j])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
