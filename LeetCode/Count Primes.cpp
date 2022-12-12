#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

bool prime[5000010];
int cnt=0;

class Solution {
public:
    int countPrimes(int n) {
        SieveOfEratosthenes(n);
        for(int i=1;i<n;i++){if(prime[i]==true){cnt++;}}
        return cnt;
    }

    void SieveOfEratosthenes(int n)
    {
        memset(prime,true,sizeof(prime));
        prime[0]=false;
        prime[1]=false;
        for(int p=2; p*p<=n; p++)
        {
            if(prime[p]==true)
            {
                for(int i=p*p; i<=n; i=i+p)
                {
                    prime[i]=false;
                }
            }
        }
    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    cout<<s.countPrimes(n);
}





