/*Problem Statement: Given an m*n 2D matrix and an integer, write a program to find if the given integer exists in the matrix.

Given matrix has the following properties:
Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order,
and a number X is given. The task is to find whether element X is present in the matrix or not.
Input:
N = 3, M = 3
mat[][] = 3 30 38 
         44 52 54 
         57 60 69
X = 62
*/
#include<bits/stdc++.h>
using namespace std;

bool matrixSearch(vector<vector<int>> mat, int X)
{
    int M = mat.size();
    int N = mat[0].size();

    int i = 0;
    int j = M-1;
    
    while(i<N&&j>=0)
    {
        if(mat[i][j]==X)
        return true;
        
        if(mat[i][j]>X)
        j--;
        else
        i++;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
                                {1, 12, 13},
                                {2, 23, 25},
                                {7, 88, 99}};
    int key = 99 ;
    
    bool cond = matrixSearch(matrix, key);
    if(cond == true)
    cout<<"Element Found";
    else
    cout<<"Element Not found";
}