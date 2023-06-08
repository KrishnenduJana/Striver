/*Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

Examples
Examples 1:

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.*/

// Better Solution (Not Optimal) - O(N*M) time complexity and max[O(N), O(M)] space complexity

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
        for(auto j : markcol)
        {
            matrix[i][j] = 0;
        }
    }

    
    for(auto i : markrow)
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

    int m = vect.size();
    int n = vect[0].size();

    // cout<<n<<endl;
    // cout<<m<<endl;

     
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    

    vector<vector<int>> matrix = SetMatrixZero(vect);
    int m1 = matrix.size();
    int n1 = matrix[0].size();
    
    for(int i = 0; i<m1; i++)
    {
        for(int j = 0; j<n1; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}