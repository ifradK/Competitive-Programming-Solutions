#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
int main()
{
    fastio;
    int i,a[3]={0},b[2]={0},c[5]={0};
    while(1)
    {
        int win=0,lose=0,temp;
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<2;i++)
        {
            cin>>b[i];
        }
        if(a[0]==0)
        {
            break;
        }
        sort(a,a+3);
        sort(b,b+2);

        for(i=0;i<3;i++)
        {
            c[i]=a[i];
        }
        int j=i;
        for(i=0;i<2;i++)
        {
            c[j]=b[i];
            j++;
        }
        sort(c,c+5);

        if(a[0]>b[0])
        {
            lose++;
        }
        else
        {
            win++;
        }

        if(a[2]>b[1])
        {
            lose++;
        }
        else
        {
            win++;
        }

        if(lose==2)
        {
            cout<<-1<<endl;
        }
//        else if(win==2)
//        {
//            cout<<"HERE";
//            temp=1;
//            int temp2;
//            bool flag=false;
//            for(i=0;i<5;i++)
//            {
//                if(temp==c[i])
//                {
//                    temp++;
//                }
//                else
//                {
//                    flag=true;
//                    break;
//                }
//            }
//            if(flag==true && temp<=52)
//            {
//                cout<<temp<<endl;
//            }
//            else
//            {
//                cout<<-1<<endl;
//            }
//        }
        else
        {

            temp=a[1]+1;
            int temp2;
            bool flag=false;
            for(i=0;i<5;i++)
            {
                if(a[1]==c[i])
                {
                    temp2=i;
                    break;
                }
            }
            for(i=temp2+1;i<5;i++)
            {
                if(temp==c[i])
                {
                    temp++;
                }
                else
                {
                    flag=true;
                    break;
                }
            }
            if(flag==true && temp<=52)
            {
                cout<<temp<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }

    }
    return 0;
}
