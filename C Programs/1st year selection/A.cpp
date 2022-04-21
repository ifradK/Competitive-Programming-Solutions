#include<iostream>
using namespace std;

main()
{
    long long answer,i,t,k,p,n;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>k>>p>>n;
        if(k>=p)
        {
            answer=(k-p)*n;
            cout<<answer<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
    return 0;
}
