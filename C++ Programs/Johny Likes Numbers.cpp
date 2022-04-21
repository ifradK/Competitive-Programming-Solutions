#include<iostream>
using namespace std;
main()
{
    long long n,k,ans;
    cin>>n>>k;
    ans=n+k-(n%k);
    cout<<ans;
    return 0;
}
