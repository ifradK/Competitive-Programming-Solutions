#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
main()
{
    long long n,m_sum=0,cnt=0,i,a,b;
    double m_average,acc_r;
    cin>>n;
    vector<long long> m,s;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        m.push_back(a);
        s.push_back(b);
        m_sum=m_sum+m[i];
    }
    m_average=(float)m_sum/(float)n;
    for(i=0; i<n; i++)
    {
        acc_r=((float)m[i]/(float)s[i])*100;
        if(m[i]>=150 && m[i]>=m_average && acc_r>=70)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
