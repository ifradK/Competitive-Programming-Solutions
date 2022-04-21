#include<iostream>
using namespace std;
main()
{
    long long i,j,n,Max=0,Count=0;
    cin>>n;
    long long h[n];
    for(i=0; i<n; i++)
    {
        cin>>h[i];
    }
    for(i=0; i<n; i++)
    {
        Count=0;
        for(j=i; j<n; j++)
        {
            if(j==n-1)
            {
                break;
            }
            else if(h[j+1]<=h[j])
            {
                Count++;
            }
            else if(h[j+1]>h[j])
            {
                break;
            }
        }
        if(Count>Max)
        {
            Max=Count;
        }
    }
    cout<<Max;
    return 0;
}
