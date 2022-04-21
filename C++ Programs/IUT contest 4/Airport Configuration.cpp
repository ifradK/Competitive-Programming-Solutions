#include<iostream>
using namespace std;
int main()
{
    long long n,i;
    while(1)
    {
        long long time=0;
        cin>>n;
        if(n==0)
        {
            break;
        }
        int a[1000];
        a[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i+1]>a[i])
            {
                time=time+(a[i+1]-a[i])*6;
                time=time+5;
            }
            else if(a[i+1]<a[i])
            {
                time=time+(a[i]-a[i+1])*4;
                time=time+5;
            }
            else if(a[i]==a[i+1])
            {
                time=time+5;
            }
        }
        cout<<time<<endl;
    }
    return 0;
}
