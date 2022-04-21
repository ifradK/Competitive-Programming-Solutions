#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a[1010]={0}, b[1010]={0}, d[1010]={0}, i, j, min=0,  max = 0, min1 = 0, min2 = 0;

    cin >> n >> m;

    for (i=0; i<m; i++)
        cin >> a[i];

    for (i=0; i<m; i++)
        b[i] = a[i];
    for (i=0; i<m; i++)
        d[i] = a[i];

    sort (a, a+m);
    sort (d, d+m, greater<int>());
    sort (b, b+m, greater<int>());

    i = 0;
    int c =0;
   /* while(c < n)
    {
        min1 += d[i];
        d[i]--;
        c++;

        if (d[i] == 0)
            i++;
    }

    i = 0;
    c =0;
    while(c < n)
    {
        min2 += a[i];

 //       cout << min << " " << a[i] << endl;

        if (a[i+1] <= a[i])
        {
            a[i]--;
            i++;
        }
        else
            a[i]--;

        c++;

        if (i == m)
            break;
    }

    i--;
    while (c<n)
    {
        while (a[i] == 0)
            i--;
        min2 += a[i];
        a[i]--;
        if (a[i] == 0)
            i--;
        c++;
    }
*/
    i = 0;
    c = 0;
    while (c < n)
    {
        max += b[i];
        b[i]--;

        if (b[i+1] > b[i])
            i++;
        else if (b[i] < b[0])
            i=0;
        c++;
        if (i == m)
            i = 0;
    }

    i = 0;
    c = 0;
    while (c < n)
    {
        min += a[i];
        a[i]--;

        if (a[i] == 0)
            i++;
        c++;
    }

    /*
    if (min1 < min2)
        min = min1;
    else
        min = min2;
    */

    cout << max << " " << min;



}
