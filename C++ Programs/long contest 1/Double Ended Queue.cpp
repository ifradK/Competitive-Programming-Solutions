#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,value,cs=1;
    scanf("%d",&t);
    deque<long long> d;
    while(t--)
    {
        scanf("%d%d",&n,&m);
        printf("Case %d:\n",cs);
        cs++;
        string str;
        for(int i=0; i<m; i++)
        {
            cin>>str;
            if(str=="pushLeft")
            {
                scanf("%d",&value);
                if(d.size()==n)
                {
                    printf("The queue is full\n");
                }
                else
                {
                    d.push_front(value);
                    printf("Pushed in left: %d\n",value);
                }

            }
            else if(str=="pushRight")
            {
                scanf("%d",&value);
                if(d.size()==n)
                {
                    printf("The queue is full\n");
                }
                else
                {
                    d.push_back(value);
                    printf("Pushed in right: %d\n",value);
                }

            }
            else if(str=="popLeft")
            {
                if(d.empty())
                {
                    printf("The queue is empty\n");
                }
                else
                {
                    printf("Popped from left: %d\n",d.front());
                    d.pop_front();
                }

            }
            else if(str=="popRight")
            {
                if(d.empty())
                {
                    printf("The queue is empty\n");
                }
                else
                {
                    printf("Popped from right: %d\n",d.back());
                    d.pop_back();
                }
            }
        }
        d.clear();
    }
    return 0;
}


