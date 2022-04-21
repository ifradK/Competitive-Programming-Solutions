#include <iostream>
#include <math.h>
using namespace std;

long long get_length(long long num)  //Calculates the length of the number
{
    long long length;

    string str=to_string(num);
    length=str.size();

    return length;
}

long long karatsuba_multiplication(long long x, long long y)
{
    long long x_length,y_length,N,multiplier,a,b,c,d,z0,z1,z2;

    x_length = get_length(x);     //Finding out the length of both the numbers
    y_length = get_length(y);

    N = max(x_length, y_length);   // N is the bigger of the two lengths

    if(N < 10)        // If the max length is small then we directly multiply the values as it is faster
    {
        return x*y;
    }

    N = (N/2) + (N%2);   //The max length divided and rounded up

    multiplier = pow(10, N);

    a = x/multiplier;
    b = x-(b*multiplier);
    c = y/multiplier;
    d = y-(d*multiplier);

    z0 = karatsuba_multiplication(a,c);
    z1 = karatsuba_multiplication(b,d);
    z2 = karatsuba_multiplication(a+b,c+d);

    return z0 + ((z2-z1-z0)* multiplier) + (z1 * (long long)(pow(10, 2*N)));
}

int main()
{
    long long x,y;
    cin>>x>>y;
    cout<<karatsuba_multiplication(x,y)<<endl;
    return 0;
}
