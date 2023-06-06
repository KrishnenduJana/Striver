// Problem Statement: Given an array consisting of only 0s, 1s, and 2s. 
// Write a program to in-place sort the array without using inbuilt sort functions.
//  ( Expected: Single pass-O(N) and constant space)
// This is one of optimal and we can do count sort with O(n) but space is also O(n). Actually this is simmiler to DNF
// First fill ones then fill 0 from left and 2 from right.
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    int arr1[n];

    for(int i = 0; i<n; i++)
    arr1[i] = 1;

    int i0 = 0;
    int i2 = n-1;

    for(int i = 0; i<n; i++)
    {
        if(arr[i]==0)
        arr1[i0++] = 0;

        if(arr[i]==2)
        arr1[i2--] = 2;
    }

    for(int i = 0; i<n; i++)
    arr[i] = arr1[i];
    
}

void printarray(int arr[], int n)
{
    for(int i = 0; i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    int arr[] = {0,1,1,1,0,0,0,2,2,0,1,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    printarray(arr, n);
}