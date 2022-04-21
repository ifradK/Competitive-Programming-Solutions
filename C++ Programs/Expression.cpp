#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    int arr[6]={0};
    cin>>a>>b>>c;
    arr[0]=a+b+c;
    arr[1]=a+b*c;
    arr[2]=a*b+c;
    arr[3]=a*b*c;
    arr[4]=(a+b)*c;
    arr[5]=a*(b+c);

    sort(arr, arr+6);
    cout<<arr[5];
    return 0;
}
