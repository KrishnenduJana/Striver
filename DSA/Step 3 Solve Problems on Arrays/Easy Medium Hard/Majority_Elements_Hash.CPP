// Problem Statement: Given an array of N integers, write a program to return an element that 
// occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

#include<bits/stdc++.h>
using namespace std;


vector<int> majorElem(int arr[], int n)
{
    unordered_map<int, int> f;

    vector<int> v;

    for(int i = 0; i<n; i++)
    f[arr[i]]++;

    for(int i = 0; i<n; i++)
    {
        if(f[arr[i]]>n/2)
        {
            v.push_back(arr[i]);
            f[arr[i]]=0;
        }
    }

    return v;
}

int main()
{
    int arr[] = {2,2,1,1,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v = majorElem(arr, n);

    for(auto it : v)
    cout<<it<<" ";


}