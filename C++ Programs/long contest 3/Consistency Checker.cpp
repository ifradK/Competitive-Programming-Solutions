#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
typedef struct node Node;

struct node
{
    bool endmark;
    Node *next[10];
    node()
    {
        endmark=false;
        for(int i=0;i<10;i++)
        {
            next[i]=NULL;
        }
    }
};

void insert(string str, int len, Node* root)
{
    Node* current=root;
    for(int i=0;i<len;i++)
    {
        int id=str[i]-48;
        if(current->next[id]==NULL)
        {
            current->next[id]=new Node();
        }
        current=current->next[id];
    }
    current->endmark=true;
}

void del(Node *cur)
{
    for(int i=0; i<10; i++)
        if(cur->next[i])
            del(cur->next[i]);
    delete(cur);
}

bool search(string str,int len, Node* root)
{
    Node* current=root;
    int id;
    for(int i=0;i<len;i++)
    {
        id=str[i]-48;
        if(current->next[id]==NULL)
        {
            return false;
        }
        current=current->next[id];
    }
    if((current->endmark==false) || (current->endmark==true && (current->next[0]!=NULL || current->next[1]!=NULL || current->next[2]!=NULL || current->next[3]!=NULL || current->next[4]!=NULL || current->next[5]!=NULL || current->next[6]!=NULL || current->next[7]!=NULL || current->next[8]!=NULL || current->next[9]!=NULL)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long long t,n,num,i,p,cs=0;
    cin>>t;
    while(t--)
    {
        Node* root=new Node();
        cs++;
        p=0;
        cin>>n;
        string a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            insert(a[i],a[i].size(),root);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(search(a[i],a[i].size(),root)==true)
            {
                p=1;
                cout<<"Case "<<cs<<": "<<"NO"<<endl;
                break;
            }
        }
        if(p!=1)
        {
            cout<<"Case "<<cs<<": "<<"YES"<<endl;
        }
		del(root);
    }
    return 0;
}









