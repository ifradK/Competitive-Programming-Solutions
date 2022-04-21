#include<bits/stdc++.h>
using namespace std;

//Commands and Functions
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define SQR(a)                  ((a)*(a))
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen (x,"w",stdout)
#define getarray(a,n)           for(int i=0;i<n;i++) cin>>a[i]
#define pb                      push_back
#define mk                      make_pair
#define ff                      first
#define ss                      second
#define lb                      lower_bound
#define ub                      upper_bound
#define tcase                   cout<<"Case "<<C++<<": ";
#define all(a)                  a.begin(),a.end()
#define lla(A)                  A.rbegin(), A.rend()
#define Unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end())
#define lastEle(v)              v[v.size()-1]
#define ABS(x)                  ((x)<0?-(x):(x))
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define MEM(a,x)                memset(a,x,sizeof(a))
#define Godspeed                ios_base::sync_with_stdio(0);cin.tie(NULL)
#define urs(r...)               typename decay<decltype(r)>::type
#define FOR(i,a,b)              for(urs(b) i=a;i<=b;i++)
#define ROF(i,a,b)              for(urs(b) i=a;i>=b;i--)
#define REP(i,b)                for(urs(b) i=0;i<b;i++)
#define rep(i, begin, end)      for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define PER(i,a,b)              for(urs(b) i=a;i>b;i--)
#define FOREACH(i,t)            for (__typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define PRESENT(c,x)            ((c).find(x) != (c).end())
#define CPRESENT(c,x)           (find(ALL(c),x) != (c).end())
#define Lower_bound(v, x)       distance(v.begin(), lower_bound(v.begin(), v.end(), x))
#define Upper_bound(v, x)       distance(v.begin(), upper_bound(v.begin(), v.end(), x))
#define Bye                     return 0
#define SORT(v)                 sort(v.begin(),v.end())
#define revsort(a,n)            sort(a,a+n); reverse(a,a+n)
#define REV(v)                  reverse(v.begin(),v.end())
#define EVEN(x)                 (bool)(x%2==0)
#define ODD(x)                  (bool)(x&1)
#define Debug                   cout<<endl<<"I AM BATMAN"<<endl;
#define what_is(x)              cerr << #x << " is " << x << endl;
#define binleastsigonebit(x)    __builtin_ffs(x)
#define binleadingzeroes(x)     __builtin_clz(x)
#define bintrailingzeroes(x)    __builtin_ctz(x)
#define bintotalones(x)         __builtin_popcount(x)
#define getbit(n,i)             (((n)&(1<<(i)))!=0)
#define setbit0(n,i)            ((n)&(~(1<<(i))))
#define setbit1(n,i)            ((n)|(1<<(i)))
#define togglebit(n,i)          ((n)^(1<<(i)))
#define TIME                    (chrono::steady_clock::now().time_since_epoch().count())
//Datatypes
#define ll                      long long
#define ULL                     unsigned long long
#define LD                      long double
#define UI                      unsigned int
#define US                      unsigned short
//ll powmod(ll a,ll b)           {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a, ll b)
{
    return (b?gcd(b,a%b):a);
}
int PowMod(int a,int l, int md)
{
    int res=1;
    while(l)
    {
        if(l&1)
            res=res*a%md;
        l/=2;
        a=a*a%md;
    }
    return res;
}
int phi(int n)
{
    int result = 1;
    for (int i = 2; i < n; i++)
        if (GCD(i, n) == 1)
            result++;
    return result;
}
long long int Phi(long long int n)
{
    long long int res=n;
    for(long long int i=2; i*i<=n; i++)
    {
        if(!(n%i))
        {
            while(!(n%i))
            {
                n/=i;
            }
            res-=(res/i);
        }
    }
    if(n>1)
    {
        res-=(res/n);
    }
    return res;
}
int isprime(int n)
{
    bool flag = true;
    for(int i = 2; i*i <= n; ++i)
        //for(int i = 2; i <= sqrt(n); ++i)
        //for(int i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
unsigned long long binaryPow(unsigned long long a, unsigned long long b)
{
    unsigned long long ans = 1ULL;
    while(b > 0)
    {
        if(b & 1ULL)
        {
            ans = ans * a ;
        }
        a = a * a ;
        b >>= 1ULL;
    }
    return ans;
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
const unsigned long long int MOD = 1000000007; // 998244353
unsigned long long pw(unsigned long long x, unsigned long long p)
{
    if (p == 0ULL)
        return 1ULL;
    if (p == 1ULL)
        return x;
    unsigned long long v = pw(x, p / 2ULL);
    v = v * v % MOD;
    if (p % 2ULL != 0)
        v = v * x % MOD;
    return v;
}
unsigned ll BMod(unsigned ll B,unsigned ll P,unsigned ll M)
{
    if(P==0ULL)
    {
        return 1ULL;
    }
    //unsigned ll R=1ULL;
    unsigned ll R=BMod(B,P/2ULL,M);
    ULL agg=((R%M)*(R%M))%M;
    if(!ODD(P))
    {
        return agg;
    }
    else
    {
        return (agg*(B%M))%M;
    }
//    B=B%M;
//    while(P)
//    {
//        if(P&(1ULL))
//            R=(R*B)%M;
//        P=P>>(1ULL);
//        B=(B*B)%M;
//        //B=binaryPow(B,2ULL)%M;
//    }
    //return R;
}

ll invMOD(ll num,ll M)
{
    return BMod(num,M-2,M);
}
#ifdef Combi
const ll nSz = 2000006;
ll F[nSz + 1], tMod = MOD;
void Factorial()
{
    F[0] = 1;
    for(ll i = 1; i <= nSz; i++)
        F[i] = (F[i - 1] * i) % tMod;
}
inline ll nCr(int n, int r)
{
    return (F[n] * invMOD((F[n - r] * F[r]) % tMod, tMod)) % tMod;
}
#endif


//Constants

const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209

//Debugging stuff
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
long long sum() {}
template<typename T, typename... Args>
T sum(T a, Args... args)
{
    return a + sum(args...);
}
//Data Structures
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pdd pair<double,double>
#define pldld pair<long long double, long long double>
/*
    Syed Rifat Raiyan
    IUT CSE-18
    Go Beyond! Plus Ultra!
*/

ULL mmul(ULL a, ULL b, ULL m)
{
    ULL result = 0ULL;
    a %= m;
    while (b)
    {
        if (b % 2ULL)
            result = (result + a) % m;
        a = (a + a) % m;
        b /= 2ULL;
    }
    return result;
}
ULL mpow(ULL a,ULL b, ULL m)
{
    ULL result = 1ULL;
    a %= m;
    while (b)
    {
        if (b % 2ULL)
            result = mmul(result, a, m);
        a = mmul(a, a, m);
        b /= 2ULL;
    }
    return result;
}
int main()
{
    Godspeed;
    unsigned ll a,b,c;

    while(scanf("%llu %llu %llu", &a, &b, &c) != EOF)
    {
        if(a==0)
        {
            printf("0\n");
        }
        else if(b==0)
        {
            printf("%llu\n",a%c);
        }
        else
        {
            unsigned ll res=mpow(a,b,c);
            //cout<<res<<endl;
            printf("%llu\n",res);
        }
    }
    Bye;
}


