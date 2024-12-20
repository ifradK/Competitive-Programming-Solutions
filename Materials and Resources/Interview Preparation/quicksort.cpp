#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
#define ll long long
using namespace std;


//HAS SOME BUGS

int arr[10];

int partition(int left, int right)
{
    cout<<"HERE"<<endl;
    int pivot = arr[left];
    int i=left,j=right;

    while(1)
    {
        if(i>j){break;}
        while(1)
        {
            if(arr[i]>pivot){break;}
            i++;
        }
        while(1)
        {
            if(arr[j]<pivot){break;}
            j--;
        }
        if(i<j){swap(arr[i],arr[j]);}
    }
    swap(arr[left],arr[j]);

    return j;
}

void quicksort(int left, int right)
{
    if(left<right)
    {
        cout<<"HERE1"<<endl;
        int pivot = partition(left,right);

        quicksort(left,pivot-1);
        quicksort(pivot+1,right);
    }
}

int main()
{
    fastio;
    int i;
    for(i=0;i<10;i++){cin>>arr[i];}
    quicksort(0,9);
    for(i=0;i<10;i++){cout<<arr[i]<<" ";}
}

// 4 2 6 5 8 9 0 1 3 7
