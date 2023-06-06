// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
// has the largest sum and returns its sum and prints the subarray.
// Using Kaden's Algorithms
// Here we will find the sub array index.
// Striver : https://www.youtube.com/watch?v=AHZpyENo7k4

#include<bits/stdc++.h>
using namespace std;

vector<int> maxSum(int arr[], int n)
{
    int maxsum = INT_MIN;
    int sum = arr[0];

    vector<int> v;
    int start = -1, end = -1;
    for(int i = 0; i<n; i++)
    {
        if(sum==0)
        start = i;
        sum+=arr[i];

        if(sum<0)
        sum = 0;

        if(sum > maxsum)
        {
            maxsum = sum;
            end = i;
        }
    }

    v.push_back(start+1);
    v.push_back(end+1);
    v.push_back(maxsum);
    return v;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    int n= sizeof(arr)/sizeof(arr[0]);

    vector<int> v = maxSum(arr, n);
    cout<<"Interval : ["<<v[0]<<","<<v[1]<<"]"<<endl;
    cout<<"Max sum : "<<v[2];
}