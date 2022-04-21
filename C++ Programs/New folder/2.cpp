#include<iostream>
using namespace std;
main()
{
    int a,b;
    cin>>a>>b;
    if(a>=b)
    {
        cout<<1;
        return 0;
    }
    else if(a<b)
    {
        for(i=1;i<=a;i++)
        {
            if(((a-i)+i*a)>=b)
            {
                cout<<1+i;
                return 0;
            }
        }
    }
}
