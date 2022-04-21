#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        long long i,cnt=0;
        cin>>str1>>str2;
        for(i=0;i<str1.size();i++)
        {
            if(str1.compare(i,str2.size(),str2)==0)
            {
                cnt++;
            }
        }
        cout<<"Case "<<cs<<": "<<cnt<<endl;
        cs++;
    }
    return 0;
}
