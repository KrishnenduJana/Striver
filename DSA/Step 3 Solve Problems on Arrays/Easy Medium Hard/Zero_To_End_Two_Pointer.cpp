// Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end
// of the array and move non-negative integers to the front by maintaining their order.
//Two Pointer Method
#include<bits/stdc++.h>
using namespace std;

int ZeroToEnd(int arr[], int n)
{
    int k = 0;
    for(int j = 0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            arr[k] = arr[j];
            k++;            
        }
    }

    return k;
}

void printarry(int arr[], int n)
{
    for(int i = 0; i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    int arr[] = {1,2,0,0,0,2,3,4,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    printarry(arr, n);
    int k = ZeroToEnd(arr, n);
    cout<<"Non zeros are : "<<k<<endl;

    for(int i = k; i<n; i++)
    arr[i] = 0;

    printarry(arr, n);


}