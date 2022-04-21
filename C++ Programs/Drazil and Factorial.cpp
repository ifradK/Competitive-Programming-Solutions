#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main()
{
    fastio;
    long long i,j,n,a[100]= {0};
    string val;
    cin>>n;
    cin>>val;
    for(i=0,j=0; i<val.size(); i++)
    {
        if(val[i]=='2')
        {
            a[j]=2;
            j++;
        }
        else if(val[i]=='3')
        {
            a[j]=3;
            j++;
        }
        else if(val[i]=='4')
        {
            a[j]=3;
            j++;
            a[j]=2;
            j++;
            a[j]=2;
            j++;
        }
        else if(val[i]=='5')
        {
            a[j]=5;
            j++;
        }
        else if(val[i]=='6')
        {
            a[j]=5;
            j++;
            a[j]=3;
            j++;
        }
        else if(val[i]=='7')
        {
            a[j]=7;
            j++;
        }
        else if(val[i]=='8')
        {
            a[j]=7;
            j++;
            a[j]=2;
            j++;
            a[j]=2;
            j++;
            a[j]=2;
            j++;
        }
        else if(val[i]=='9')
        {
            a[j]=3;
            j++;
            a[j]=3;
            j++;
            a[j]=7;
            j++;
            a[j]=2;
            j++;
        }
    }
    sort(a,a+j,greater<long long>());
    for(i=0;i<j;i++)
    {
        cout<<a[i];
    }
    return 0;
}
