#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fastio;
    int test_case=0,i,j,k,no_of_link,val,n,pos1,pos2;
    while(cin>>no_of_link)
    {
        test_case++;
        int matrix[21][21]= {0};
        memset(matrix,0,sizeof(matrix));
        for(j=1; j<=no_of_link; j++)
        {
            cin>>val;
            matrix[1][val]=1;
            matrix[val][1]=1;
        }
        for(i=2; i<20; i++)
        {
            cin>>no_of_link;
            for(j=1; j<=no_of_link; j++)
            {
                cin>>val;
                matrix[i][val]=1;
                matrix[val][i]=1;
            }
        }
        cout<<"Test Set #"<<test_case<<endl;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            int node_in_next_layer=0,node_left_in_layer=1,cnt=0,x;
            queue<int> node;
            bool visited[21],reached_end=false;;
            for(j=0; j<=20; j++)
            {
                visited[j]=false;
            }
            cin>>pos1>>pos2;
            visited[pos1]=true;
            node.push(pos1);
            while(!node.empty())
            {
                x=node.front();
                node.pop();
                if(x==pos2)
                {
                    reached_end=true;
                    break;
                }
                //explore_bfs
                for(k=1; k<=20; k++)
                {
                    if(matrix[x][k]==1 && visited[k]==false)
                    {
                        node.push(k);
                        visited[k]=true;
                        node_in_next_layer++;
                    }
                }
                node_left_in_layer--;
                if(node_left_in_layer==0)
                {
                    node_left_in_layer=node_in_next_layer;
                    node_in_next_layer=0;
                    cnt++;
                }
            }
            if(reached_end==true)
            {
                if(pos1>0 && pos1<10 && pos2>0 && pos2<10)
                {
                    cout<<" "<<pos1<<" to  "<<pos2<<": "<<cnt<<endl;
                }
                else if(pos1>0 && pos1<10 && pos2>9 && pos2<=20)
                {
                    cout<<" "<<pos1<<" to "<<pos2<<": "<<cnt<<endl;
                }
                else if(pos1>9 && pos1<=20 && pos2>0 && pos2<10)
                {
                    cout<<pos1<<" to  "<<pos2<<": "<<cnt<<endl;
                }
                else if(pos1>9 && pos1<=20 && pos2>9 && pos2<=20)
                {
                    cout<<pos1<<" to "<<pos2<<": "<<cnt<<endl;
                }
            }
            while(!node.empty())
            {
                node.pop();
            }
        }
        cout<<endl;
    }
    return 0;
}

