#include <stdio.h>
int main()
{
    int test, i;
    scanf("%d", &test);
    for(i=1; i<=test; i++)
    {
        int n, m, D;
        scanf("%d%d", &n, &m);
        int a[n], j, k, l, temp, x, y;
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[j]);
        }
        for(k=0; k<m; k++)
        {
            char step[2];
            scanf("%s", step);
            if(step[0]=='S')
            {
                scanf("%d", &D);
                for(j=0; j<n; j++)
                {
                    a[j]=a[j]+D;
                }
            }
            else if(step[0]=='M')
            {
                scanf("%d", &D);
                for(j=0; j<n; j++)
                {
                    a[j]=a[j]*D;
                }
            }
            else if(step[0]=='D')
            {
                scanf("%d", &D);
                for(j=0; j<n; j++)
                {
                    a[j]=a[j]/D;
                }
            }
            else if(step[0]=='R')
            {
                for(j=0,l=n-1; j<n/2; j++, l--)
                {
                    temp = a[j];
                    a[j] = a[l];
                    a[l] = temp;
                }
            }
            else if(step[0]=='P')
            {
                scanf("%d%d", &x, &y);
                temp = a[x];
                a[x] = a[y];
                a[y] = temp;
            }
        }
        printf("Case %d:\n", i);
        for(j=0; j<n-1; j++)
        {
            printf("%d ", a[j]);
        }
        printf("%d\n", a[j]);
    }
    return 0;
}
