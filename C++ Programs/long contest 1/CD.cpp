#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,value,cnt;
    set<long long> s;
    while(scanf("%lld %lld",&n,&m),n||m)
    {
        cnt=0;
        s.clear();
        while(n--)
        {
            scanf("%lld",&value);
            s.insert(value);
        }
        while(m--)
        {
            scanf("%lld",&value);
            if(s.find(value)!=s.end())
            {
                cnt++;
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
