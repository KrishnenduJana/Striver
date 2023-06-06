//Problem:  Given an array of size n, sort the array using Merge Sort.
// Divide and Merge.

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i1 = low;
    int i2 = mid + 1;
    int B[high-low+1];

    int k = 0;

    while(i1<=mid&&i2<=high)
    {
        if(arr[i1]>arr[i2])
        {
            B[k++] = arr[i2++];
        }
        else
        {
            B[k++] = arr[i1++];
        }        
    }

    while(i1<=mid)
    B[k++] = arr[i1++];

    while(i2<=high)
    B[k++] = arr[i2++];


    for(int i = low; i<=high; i++)
    arr[i] = B[i-low];
}

void mergeSort(int arr[], int low, int high)
{
    if(low>=high)
    return ;

    int mid = (low + high)/2;
    mergeSort(arr,low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}


int main()
{
    int A[] = {3,2,1,4,5,6,-1,9,-2,4};
    int n = sizeof(A)/sizeof(A[0]);
    mergeSort(A,0,n);

    for(int i = 0; i<n;i++)
    cout<<A[i]<<" ";
}