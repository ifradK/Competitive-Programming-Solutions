#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int st[5];
int pos = -1;

void top()
{
    if(pos==-1){cout<<"Stack is empty"<<endl;}
    else{cout<<st[pos]<<endl;}
}

void push(int num)
{
    if(pos+1>4){cout<<"Stack is full"<<endl;}
    else
    {
        pos++;
        st[pos]=num;
    }
}

void pop()
{
    if(pos==-1){cout<<"Stack is empty"<<endl;}
    else{pos--;}
}


int main()
{
    fastio;
    pop();
    top();
    push(1);
    push(2);
    top();
    push(3);
    push(4);
    push(5);
    push(6);
    top();
    return 0;
}
