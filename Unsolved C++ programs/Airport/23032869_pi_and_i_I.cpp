#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[1010],b[1010],i,mini=0,maxi=0,j,k;
    cin >> n>>m;
    k=n;
    for(i=0;i<m;i++)
    {
        cin >>a[i];
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        sort(b,b+m);
        {
            mini=mini+b[0];
            b[0]--;
            if(b[0]==0)b[0]=1010;
        }
        /*if(k>=a[i])
        {
            mini=mini+a[i]*(a[i]+1)/2;
            k=k-a[i];
        }
        else
        {
            mini=mini+a[i]*(a[i]+1)/2-k*(k+1)/2;
            k=0;
        }*/
    }
    for(j=0;j<n;j++)
    {
        sort(a,a+m);
        maxi=maxi+a[m-1];
        a[m-1]--;
    }
    cout << maxi << " " << mini << "\n";
}
