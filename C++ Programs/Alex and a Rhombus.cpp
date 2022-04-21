#include<iostream>
using namespace std;
main()
{
    int n,sum=0,ans,m;
    cin>>n;
    int a=(n*2-1);
    m=a;
    while(a>=1)
    {
        sum=sum+a;
        a=a-2;
    }
    ans=sum*2-m;
    cout<<ans;
    return 0;
}
