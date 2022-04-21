#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    double x,y,x1,y1,distance(0.0),ans;
    cin>>x1>>y1;
    while(--n)
    {
        cin>>x>>y;
        distance=distance+sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        x1=x;
        y1=y;
    }
    ans=(distance*.02)*k;
    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}
