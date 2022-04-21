#include<iostream>
using namespace std;

main()
{
    int n,i,j,z=0,x=0,p=0,q=0;
    cin>>n;
    long long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int count=1,max=1;
    for(i=0; i<=n-2; i++)
    {
        count=1;
        p=0;
        q=0;
        for(j=i; j<=n-2; j++)
        {
            if(a[j]>a[j+1])
            {
                if(z=1)
                {
                    q=0;
                    z=0;
                }
                q++;
                if(q<2)
                {
                    count++;
                }
                x=1;
            }
            else if(a[j]<a[j+1])
            {
                if(x=1)
                {
                    p=0;
                    x=0;
                }
                p++;
                if(p<2)
                {
                    count++;
                }
                z=1;
            }
            if(count>max)
            {
                max=count;
            }
            if(p==2 || q==2)
            {
                break;
            }
        }
    }
    cout<<max;
    return 0;
}
