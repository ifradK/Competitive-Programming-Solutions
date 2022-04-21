#include <stdio.h>
main()
{
    int n,i;
    long long q,num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0, remainder1, base1 = 1, binary1 = 0,no_of_1s1 = 0,num1;



    scanf("%lld", &num);
    decimal_num = num;
    num1=num+1;
    while (num > 0)
    {
        remainder = num % 2;
        if (remainder == 1)
        {
            no_of_1s++;
        }
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
     while(num1>decimal_num)
     {
         num1=q;
            remainder1 = num1 % 2;
        if (remainder1 == 1)
        {
            no_of_1s1++;
        }
        binary1 = binary1 + remainder1 * base1;

        num1 = num1 / 2;
        base1 = base1 * 10;
        if(no_of_1s1==no_of_1s)
        {
            printf("%lld",q);
            goto c;
        }

        num1++;
     }

c:

        getch();
    }
