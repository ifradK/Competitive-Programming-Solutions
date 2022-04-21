#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n,i;
    cin>>q;
    while(q--)
    {
        cin>>n;
        bool flag=false;
        long long a[n+1],cnt=0,temp1,temp2;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]!=i)
            {
                temp1=i;
                flag=true;
                break;
            }
        }
        for(i=n;i>=0;i--)
        {
            if(a[i]!=i)
            {
                temp2=i;
                break;
            }
        }

        if(flag==false)
        {
            cout<<0<<endl;
        }
        else
        {
            bool flag1=false;
            for(i=temp1+1;i<temp2;i++)
            {
                if(a[i]==i)
                {
                    flag1=true;
                    break;
                }
            }
            if(flag1==true)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
    }
    return 0;
}
