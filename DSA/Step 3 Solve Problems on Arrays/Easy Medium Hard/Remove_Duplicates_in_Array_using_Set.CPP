//Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates 
//in place such that each unique element appears only once. The relative order of the elements should be kept the same.

#include<bits/stdc++.h>
using namespace std;

set<int> removeDuplicate(vector<int> v)
{
    set<int> S;
    for(auto &i: v)
    S.insert(i);

    return S;
}

int main()
{
    vector<int> v = {1,2,1,1,2,3,3,3,3};
    set<int> S;

    S = removeDuplicate(v);

    for(auto i:v)
    cout<<i<<" ";
}