#include<iostream>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,m,mx=0,mn=0,passenger,i,k;
    cin>>n>>m;
    int a[m],b[m];
    for(i=0; i<m; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+m,greater<int>());
    i=0;
    passenger=n;
    while(passenger!=0)
    {
        //cout<<" a[i] "<<a[i]<<" mx "<<mx<<" i "<<i<<" passenger "<<passenger<<endl;
        for(k=0;k<m;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
        mx=mx+a[i];
        a[i]=a[i]-1;
        if(i==m-1)
        {
            if(a[i]<a[i-1])
            {
                i=0;
            }
        }
        else if(a[i]<a[i+1])
        {
            i++;
        }
        else if(a[i]<a[i-1])
        {
            i--;
        }
        passenger--;
    }
    sort(b,b+m);
    for(i=0; ; )
    {
        //cout<<" b[i] "<<b[i]<<" mn "<<mn<<" i "<<i<<" n "<<n<<endl;
        if(n==0)
        {
            break;
        }
        if(b[i]==0)
        {
            i++;
        }
        mn=mn+b[i];
        b[i]=b[i]-1;
        n--;
    }
    cout<<mx<<" "<<mn;
    return 0;
}
