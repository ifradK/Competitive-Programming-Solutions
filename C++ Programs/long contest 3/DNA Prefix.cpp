#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
typedef struct node Node;
long long mx=INT_MIN;

struct node
{
    long number;
    bool endmark;
    Node *next[4];
    node()
    {
        endmark=false;
        for(int i=0;i<4;i++)
        {
            next[i]=NULL;
        }
        number=0;
    }
};

int getIndex(char ch)
{
    if(ch=='A')
    {
        return 0;
    }
    else if(ch=='C')
    {
        return 1;
    }
    else if(ch=='G')
    {
        return 2;
    }
    else if(ch=='T')
    {
        return 3;
    }
}

void insert(string str, int len, Node* root)
{
    Node* current=root;
    for(int i=0;i<len;i++)
    {
        int id=getIndex(str[i]);
        if(current->next[id]==NULL)
        {
            current->next[id]=new Node();
        }
        current=current->next[id];
        current->number++;
    }
    current->endmark=true;
}

void del(Node *cur)
{
    for(int i=0; i<4; i++)
        if(cur->next[i])
            del(cur->next[i]);
    delete(cur);
}

void dfs(Node* cur,int height)
{
    long long ans=(cur->number)*height;
    mx=max(ans,mx);
    for(int i=0;i<4;i++)
    {
        if(cur->next[i])
        {
            dfs(cur->next[i],height+1);
        }
    }
}

int main()
{
    fastio;
    long long t,n,cs=0,i;
    cin>>t;
    while(t--)
    {
        string str;
        Node* root=new Node();
        cs++;
        mx=INT_MIN;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>str;
            insert(str,str.size(),root);
        }
        dfs(root,0);
        cout<<"Case "<<cs<<": "<<mx<<endl;
        del(root);
    }
    return 0;
}
