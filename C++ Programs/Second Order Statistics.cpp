#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,i,ans,count1=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[0])
        {
            ans=a[i];
            break;
        }
        count1++;
    }
    if(count1==n)
    {
        cout<<"NO";
        return 0;
    }
    cout<<ans;
    return 0;
}
