#include <bits/stdc++.h>
using namespace std;

long long a,b;

long long lcm(long long a, long long b)
{
    return (a*b)/__gcd(a, b);
}


int main()
{
    long long q,n,a,b;
    cin>>q;
    while(q--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            long long mn=n-1,result;
            a=1,b=n-1;
            for(long long i=3; i*i<=n; i=i+2)
            {
                if(n%i==0)
                {
                    result=lcm(n/i,(n/i)*(i-1));
                    if(mn>result)
                    {
                        mn=result;
                        a=n/i;
                        b=(n/i)*(i-1);
                    }
                }
            }
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}
