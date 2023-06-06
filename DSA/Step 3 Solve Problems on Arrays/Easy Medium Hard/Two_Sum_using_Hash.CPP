// Problem Statement: Given an array of integers arr[] and an integer target.
// Using Hash Map

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(int arr[], int n, int target)
{
    vector<int> v;
    unordered_map<int, int> f;

    for(int i = 0; i<n;i++)
    f[arr[i]]++;

    for(int i = 0; i<n; i++)
    {
        int another_pair = target - arr[i];
        if(f[another_pair]>0)
        {
            if(arr[i]!=another_pair)
            {
                v.push_back(i);
                //v.push_back(f[another_pair]);
            }

            // v.push_back(i);
            // v.push_back(f[another_pair]);
        }
    }

    return v;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    vector<int> v = twoSum(arr, n, target);

    for(auto it: v)
    cout<<it<<" ";
}