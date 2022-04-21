#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    string url,command,current;
    stack<string> back_s;
    stack<string> forward_s;
    scanf("%d",&t);
    while(t--)
    {
        current="http://www.lightoj.com/";
        printf("Case %d:\n",cs++);
        while(1)
        {
            cin>>command;
            if(command=="VISIT")
            {
                cin>>url;
            }
            if(command=="VISIT")
            {
                back_s.push(current);
                current=url;
                cout<<url<<endl;
                while(!forward_s.empty())
                {
                    forward_s.pop();
                }
            }
            else if(command=="BACK")
            {
                if(back_s.empty())
                {
                    printf("Ignored\n");
                }
                else
                {
                    forward_s.push(current);
                    current=back_s.top();
                    cout<<current<<endl;
                    back_s.pop();
                }
            }
            else if(command=="FORWARD")
            {
                if(forward_s.empty())
                {
                    printf("Ignored\n");
                }
                else
                {
                    back_s.push(current);
                    current=forward_s.top();
                    cout<<current<<endl;
                    forward_s.pop();
                }
            }
            else if(command=="QUIT")
            {
                break;
            }
        }
        while(!forward_s.empty())
        {
            forward_s.pop();
        }
        while(!back_s.empty())
        {
            back_s.pop();
        }
    }
    return 0;
}

