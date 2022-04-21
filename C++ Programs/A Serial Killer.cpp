#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    string a[1010],b[1010];
    cin>>a[0]>>b[0];
    cin>>n;
    cout<<a[0]<<" "<<b[0]<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]==a[i-1])
        {
           a[i]=b[i-1];
        }
        else if(a[i]==b[i-1])
        {
            a[i]=a[i-1];
        }
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    return 0;
}
