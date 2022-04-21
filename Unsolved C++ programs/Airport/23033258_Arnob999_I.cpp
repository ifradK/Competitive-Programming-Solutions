#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, d, i, maxx = 0, x, minn = 0;
    cin>>n>>m;
    d = n;
    int a[m];
    for(i=0; i<m; i++)
        cin>>a[i];
    sort(a, a+m);
    for(i=0; i<m; i++)
    {
        if(d>=a[i])
        {
            minn+=(a[i]*(a[i]+1)/2);
            d-=a[i];
        }
        else
        {
            x = a[i]-d;
            x = (x*(x+1)/2);
            minn+=((a[i]*(a[i]+1)/2)-x);
            break;
        }
    }
    sort(a, a+m, greater<int>());
    while(n)
    {
        maxx+=a[0];
        n--;
        a[0]--;
        sort(a, a+m, greater<int>());
    }
    cout<<maxx<<" "<<minn;
}
