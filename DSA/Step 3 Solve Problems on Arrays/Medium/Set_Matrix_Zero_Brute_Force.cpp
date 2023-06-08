/*Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

Examples
Examples 1:

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.*/

// Brute Force

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> SetMatrixZero(vector<vector<int>> matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> markrow;
    vector<int> markcol;

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(matrix[i][j]==0)
            {
                markrow.push_back(i);
                markcol.push_back(j);
            }
        }
    }

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<markcol.size(); j++)
        {
            matrix[i][j] = 0;
        }
    }

    
    for(int i = 0; i<markrow.size(); i++)
    {
        for(int j = 0; j<n; j++)
        {
            matrix[i][j] = 0;
        }
    }

    
    return matrix;

}


int main()
{
    vector<vector<int>> vect
    {
        {1, 1,1},
        {1, 0,1},
        {0,1,1},
        {1,1,1}
    };

     
    for(int i = 0; i<vect.size(); i++)
    {
        for(int j = 0; j<vect[0].size(); j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    

    vector<vector<int>> matrix = SetMatrixZero(vect);
    int m = matrix.size();
    int n = matrix[0].size();
    
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}