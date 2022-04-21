#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[0][1]=='0' && a[1][0]=='0')
        {
            if(a[n-2][n-1]=='1' && a[n-1][n-2]=='1')
            {
                cout<<0<<endl;
            }
            else if(a[n-2][n-1]=='0' && a[n-1][n-2]=='0')
            {
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(a[n-2][n-1]=='1' && a[n-1][n-2]=='0')
            {
                cout<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(a[n-2][n-1]=='0' && a[n-1][n-2]=='1')
            {
                cout<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
        else if(a[0][1]=='1' && a[1][0]=='1')
        {
            if(a[n-2][n-1]=='0' && a[n-1][n-2]=='0')
            {
                cout<<0<<endl;
            }
            else if(a[n-2][n-1]=='1' && a[n-1][n-2]=='1')
            {
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(a[n-2][n-1]=='0' && a[n-1][n-2]=='1')
            {
                cout<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(a[n-2][n-1]=='1' && a[n-1][n-2]=='0')
            {
                cout<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
        else if(a[0][1]=='0' && a[1][0]=='1')
        {
            if(a[n-2][n-1]=='0' && a[n-1][n-2]=='0')
            {
                cout<<1<<endl;
                cout<<1<<" "<<2<<endl;
            }
            //upto
            else if(a[n-2][n-1]=='1' && a[n-1][n-2]=='1')
            {
                cout<<1<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else if(a[n-2][n-1]=='0' && a[n-1][n-2]=='1')
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(a[n-2][n-1]=='1' && a[n-1][n-2]=='0')
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
        else if(a[0][1]=='1' && a[1][0]=='0')
        {
            if(a[n-2][n-1]=='0' && a[n-1][n-2]=='0')
            {
                cout<<1<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else if(a[n-2][n-1]=='1' && a[n-1][n-2]=='1')
            {
                cout<<1<<endl;
                cout<<1<<" "<<2<<endl;
            }
            else if(a[n-2][n-1]=='0' && a[n-1][n-2]=='1')
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(a[n-2][n-1]=='1' && a[n-1][n-2]=='0')
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
        }
    }
    return 0;
}
