// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
// has the largest sum and returns its sum and prints the subarray.
// Using Kaden's Algorithms
// Striver : https://www.youtube.com/watch?v=AHZpyENo7k4

#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n)
{
    int maxsum = INT_MIN;
    int sum = arr[0];
    for(int i = 0; i<n; i++)
    {
        sum+=arr[i];

        if(sum<0)
        sum = 0;

        if(sum > maxsum)
        maxsum = sum;
    }
    return maxsum;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    int n= sizeof(arr)/sizeof(arr[0]);

    int largesum = maxSum(arr, n);
    cout<<largesum;
}