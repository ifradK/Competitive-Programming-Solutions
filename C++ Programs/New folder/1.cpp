#include<iostream>
using namespace std;
main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int length=a.size();
    int i,days=0;
    for(i=0;i<length;i++)
    {
        if(a[i]==b[i])
        {
            days++;
        }
    }
    cout<<days;
    return 0;
}
