#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,value,sum=0,cost=0,a,b;
    priority_queue<long> p;
    while(1)
    {
        scanf("%lld",&n);
        cost=0;
        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            scanf("%lld",&value);
            p.push(-value);
        }
        for(i=0; i<n-1; i++)
        {
            a=p.top();
            p.pop();
            b=p.top();
            p.pop();
            sum=a+b;
            cost=cost+sum;
            p.push(sum);
        }
        printf("%lld\n",-cost);
        p=priority_queue<long>();
    }
    return 0;
}

