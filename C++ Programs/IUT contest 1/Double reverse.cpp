#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    long long n,a,b,c,d,i,j,val=1;
    cin>>n>>a>>b>>c>>d;
    long str[n+1];
    for(i=1;i<=n;i++)
    {
        str[i]=val;
        val++;
    }
    for(i=a,j=b;i<=b;i++,j--)
    {
        str[i]=j;
    }
    while(c<d)
    {
        swap(str[c],str[d]);
        c++;
        d--;
    }
    for(i=1;i<=n;i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}
