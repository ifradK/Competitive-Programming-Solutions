#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    list<int> li;
    while(1)
    {
        scanf("%d",&n);
        int a[n-1],pos=0,i;
        if(n==0)
        {
            break;
        }
        for(i=n;i>0;i--)
        {
            li.push_front(i);
        }
        while(1)
        {
            if(li.size()==1)
            {
                break;
            }
            a[pos]=li.front();
            pos++;
            li.pop_front();
            li.push_back(li.front());
            li.pop_front();
        }
        printf("Discarded cards:");
        for(i=0;i<n-1;i++)
        {
            if(i==n-2)
            {
                printf(" %d",a[i]);
            }
            else
            {
                printf(" %d,",a[i]);
            }
        }
        printf("\n");
        printf("Remaining card: %d\n",li.front());
        li.pop_front();
    }
    return 0;
}
