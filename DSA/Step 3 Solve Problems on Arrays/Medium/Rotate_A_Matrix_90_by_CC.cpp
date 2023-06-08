// Problem Statement: Given a matrix, your task is to rotate the matrix 90 degrees clockwise.
/*Example 1:

Input: [[1,2,3],[4,5,6],[7,8,9]]

Output: [[7,4,1],[8,5,2],[9,6,3]]

Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix.*/

/*
90 CC : Transpose + Reverse each row
90 CCW : Reverse each row + Transpose*/

#include<bits/stdc++.h>
using namespace std;

void rotate90CC(vector<vector<int>>& mat)       //Note that here & is important other wise it will not swap in transpose
{
    int n = mat.size();

    //90 CC : Transpose + Reverse each row

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i<j)
            swap(mat[i][j], mat[j][i]);
        }
    }

    for(int i = 0; i<n; i++)
    reverse(mat[i].begin(), mat[i].end());
}


int main()
{
    vector<vector<int>> mat {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    for(int i = 0; i<mat.size(); i++)
    {
        for(int j = 0; j<mat.size(); j++)
        cout<<mat[i][j]<<" ";

        cout<<endl;
    }
    

    rotate90CC(mat);
    for(int i = 0; i<mat.size(); i++)
    {
        for(int j = 0; j<mat.size(); j++)   
        cout<<mat[i][j]<<" ";

        cout<<endl;
    }
    
}