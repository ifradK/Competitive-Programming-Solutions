#include<iostream>
using namespace std;

main()
{
    long n,i,j;
    cin>>n;
    int a[n+10];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(i>0)
        {
            if(i==n-1)
            {
                cout<<" "<<-1;
            }
            for(j=i+1; j<n; j++)
            {
                if(a[j]>a[i])
                {
                    cout<<" "<<a[j];
                    break;
                }
                if(j==n-1)
                {
                    cout<<" "<<-1;
                }
            }
        }
        if(i==0)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[j]>a[i])
                {
                    cout<<a[j];
                    break;
                }
                if(j==n-1)
                {
                    cout<<-1;
                }
            }
        }

    }
    return 0;
}
