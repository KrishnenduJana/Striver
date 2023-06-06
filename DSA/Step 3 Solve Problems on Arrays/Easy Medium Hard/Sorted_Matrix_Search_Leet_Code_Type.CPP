/*Problem Statement: Given an m*n 2D matrix and an integer, write a program to find if the given integer exists in the matrix.

You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
Input: matrix = [[1,3,5,7],
                [10,11,16,20],
                [23,30,34,60]],
target = 3
Output: true
*/
#include<bits/stdc++.h>
using namespace std;

bool matrixSearch(vector<vector<int>> matrix, int key)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = m*n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(matrix[mid/m][mid%m]==key)
        return true;

        if(matrix[mid/m][mid%m]<key)
        low = mid + 1;
        else
        high = mid - 1;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
                                {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
    int key = 8;
    
    bool cond = matrixSearch(matrix, key);
    if(cond == true)
    cout<<"Element Found";
    else
    cout<<"Element Not found";
}