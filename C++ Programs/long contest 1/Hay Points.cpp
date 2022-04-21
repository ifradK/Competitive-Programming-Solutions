#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,long> m1;
    string a,b;
    long n,m,value;
    cin>>m>>n;
    while(m--)
    {
        cin>>a>>value;
        m1[a]=value;
    }
    while(n--)
    {
        long sum=0;
        while(1)
        {
            cin>>b;
            if(b==".")
            {
                break;
            }
            sum=sum+m1[b];
        }
        cout<<sum<<endl;
    }
    return 0;
}
