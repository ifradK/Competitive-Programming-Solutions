#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int arr[10];

void merge(int start, int mid, int end)
{
    int leftLength = mid-start+1;
    int rightLength = end-mid;
    int ar1[leftLength],ar2[rightLength];

    for(int i=0;i<leftLength;i++){ar1[i] = arr[start+i];}
    for(int i=0;i<rightLength;i++){ar2[i] = arr[mid+1+i];}

    int leftPtr=0,rightPtr=0,arr_idx=start;

    while(leftPtr<leftLength && rightPtr<rightLength)
    {
        if(ar1[leftPtr]>=ar2[rightPtr])
        {
            arr[arr_idx]=ar1[leftPtr];
            leftPtr++;
        }
        else
        {
            arr[arr_idx]=ar2[rightPtr];
            rightPtr++;
        }
        arr_idx++;
    }

    while(leftPtr<leftLength)
    {
        arr[arr_idx]=ar1[leftPtr];
        leftPtr++;
        arr_idx++;
    }
    while(rightPtr<rightLength)
    {
        arr[arr_idx]=ar2[rightPtr];
        rightPtr++;
        arr_idx++;
    }
}


void mergesort(int start, int end)
{
    if(start>=end){return;}
    int mid = start + (end-start) / 2;
    mergesort(start,mid);
    mergesort(mid+1,end);
    merge(start,mid,end);
}


int main()
{
    fastio;
    for(int i=0;i<10;i++){cin>>arr[i];}
    mergesort(0,10);
    for(int i=0;i<10;i++){cout<<arr[i]<<" ";}
}
