/*Problem Statement: Given an array of N integers.
Find the elements that appear more than N/3 times in the array. If no such element exists, return an empty vector.*/
// Brute force - O(n^2) Time O(1) SPace

#include<bits/stdc++.h>
using namespace std;

vector<int> majority3(int arr[], int n)
{
    unordered_map<int, int> f;
    vector<int> res;
    for(int i = 0; i<n; i++)
    f[arr[i]]++;                    //Unoreded Map insert avg O(1) but worst is O(n)

    for(int i = 0; i<n; i++)
    {
        if(f[arr[i]]>n/3)
        {
            res.push_back(arr[i]);
            f[arr[i]] = 0;
        }
    }

    return res;    
}

int main()
{
    int arr[] =  {11, 33, 33, 11, 33, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> res = majority3(arr,n);
    if(res.empty()==true)
    cout<<"No majority element exists";
    else
    for(auto it : res)
    cout<<it<<" ";
}