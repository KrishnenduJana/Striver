// Problem Statement: Given a non-empty array of integers arr,
// every element appears twice except for one. Find that single one.

#include<bits/stdc++.h>
using namespace std;

vector<int> appearOnce(int arr[], int n)
{
    unordered_map<int, int> f;
    for(int i = 0; i<n; i++)
    f[arr[i]]++;

    vector<int> result;

    for(int i = 0; i<n; i++)
    {
        if(f[arr[i]]==1)
        result.push_back(arr[i]);
    }

    return result;
}

int main()
{
    int arr[] = {1,2,1,1,1,3,3,4,5,5,6,7,8,9,9,0,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> result = appearOnce(arr, n);

    for(auto it: result)
    cout<<it<<" ";

}