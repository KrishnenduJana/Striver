// Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k
// Check what is sub array?
//Brute force
// See sliding window
#include<bits/stdc++.h>
using namespace std;

vector<int> longsum(vector<int> v, int key)
{
    vector<int> res;
    unordered_map<int, int> f;
    for(int i = 0; i<v.size(); i++)
    f[v[i]]++;

    for(int i = 0; i<v.size(); i++)
    {
        int temp =key - v[i];
        if(f[temp]>0)
        {
            if(v[i]!=temp)
            res.push_back(v[i]);
        }
    }

    return res;
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7};
    int key = 6;

    vector<int> res = longsum(v,key);

    for(auto it:res)
    cout<<it<<" ";
}