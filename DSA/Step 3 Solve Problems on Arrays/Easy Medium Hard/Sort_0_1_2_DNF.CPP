// Problem Statement: Given an array consisting of only 0s, 1s, and 2s. 
// Write a program to in-place sort the array without using inbuilt sort functions.
//  ( Expected: Single pass-O(N) and constant space)
// DNF (Dutch National Flag) - See Striver
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid], arr[low]);
            
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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