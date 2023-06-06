// Problem Statement: Given an array and then find the all k = 3 sub array.
// Sliding window
// Brute force : O(N^2)
#include<bits/stdc++.h>
using namespace std;

vector<int> longsum(vector<int> v, int key)
{
    vector<int> res;
    for(int i = 0; i<v.size()-key+1; i++)
    {
        int sum = 0;
        for(int j = i; j<i+key; j++)
        sum+= v[j];

        res.push_back(sum);
    }



    return res;
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int key = 3;

    vector<int> res = longsum(v,key);

    for(auto it:res)
    cout<<it<<" ";
}