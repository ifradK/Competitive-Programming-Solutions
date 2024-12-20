#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int q[5];
int front = -1, back= -1;

void push(int num)
{
    if((back+1)%5==front){cout<<"Queue is full"<<endl;}
    else
    {
        if(back==-1){front=0;}
        back = (back+1)%5;
        q[back]=num;
    }
}

void pop()
{
    if(front==-1 && back==-1){cout<<"Queue is empty"<<endl;}
    else if(front==back)
    {
        front = -1;
        back = -1;
    }
    else{front = (front+1)%5;}
}

void print()
{
    int i;
    if(front==-1 && back==-1){cout<<"Queue is empty"<<endl;}
    for(i=front; i!=back; i=(i+1)%5){cout<<q[i]<<" ";}
    cout<<q[i];
    cout<<endl;
}

int main()
{
    fastio;
    pop();
    push(1);
    print();
    push(2);
    print();
    push(3);
    print();
    push(4);
    print();
    push(5);
    print();
    push(6);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    push(6);
    print();
    push(7);
    print();
    push(8);
    print();
    push(9);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
}
