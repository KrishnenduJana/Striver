// Problem Statement: Given an array of integers arr[] and an integer target.
// Using Hash Map

#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> twoSum(int arr[], int n, int arr2[], int m, int target)
{
    vector<pair<int, int>> v;
    unordered_map<int, int> f;

    for(int i = 0; i<n;i++)
    f[arr[i]]++;

    for(int i = 0; i<n; i++)
    {
        int another_pair = target - arr2[i];
        if(f[another_pair]>0)
        {
            v.push_back(make_pair(another_pair, arr2[i]));
        }
    }

    return v;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int arr2[] = {0,14,11,12,13,16};
    int n= sizeof(arr)/sizeof(arr[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    int target = 15;
    vector<pair<int, int>> v = twoSum(arr, n, arr2, m, target);

    for(auto it: v)
    cout<<"("<<it.first<<" "<<it.second<<")"<<endl;
}