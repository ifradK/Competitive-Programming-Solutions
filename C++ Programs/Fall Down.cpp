#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,i,j,n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=n-2; i>=0; i--)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                {
                    k=i+1;
                    while(1)
                    {
                        if(k>n-1)
                        {
                            swap(a[i][j],a[k-1][j]);
                            break;
                        }
                        else if(a[k][j]=='o' || a[k][j]=='*')
                        {
                            swap(a[i][j],a[k-1][j]);
                            break;
                        }
                        k++;
                    }
                }
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
