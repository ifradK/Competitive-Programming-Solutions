#include<iostream>
using namespace std;
main()
{
    int n,i,s,d,p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>s>>d;
      while(s<=p){s=s+d;}
      p=s;
    }
    cout<<s;
    return 0;
}
