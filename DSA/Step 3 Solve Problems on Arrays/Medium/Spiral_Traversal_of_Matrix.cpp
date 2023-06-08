/*Problem Statement: Given a Matrix, print the given matrix in spiral order.

Examples:

Example 1:
Input: Matrix[][] = { { 1, 2, 3, 4 },
		      { 5, 6, 7, 8 },
		      { 9, 10, 11, 12 },
	              { 13, 14, 15, 16 } }

Outhput: 1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10.
Explanation: The output of matrix in spiral form.*/
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralprint(vector<vector<int>> mat)
{
    int row = mat.size();
    int col = mat[0].size();

    vector<int> res;

    

    int top = 0;
    int left = 0;
    int buttom = row-1;
    int right = col-1;

    while(left<=right&&top<=buttom)
    {
        //Left -> Right
        for(int i = left; i<=right; i++)
        res.push_back(mat[top][i]);
        top++;  //Down top by one

        //Top -> Buttom
        for(int i = top; i<=buttom;i++)
        res.push_back(mat[i][right]);
        right--;

        //Right -> Left
        if(top<=buttom){
        for(int i = right; i>=left; i--)
        res.push_back(mat[buttom][i]);
        buttom--;
        }

        //Buttom -> Top
        if(left<=right){
        for(int i = buttom; i>=top; i--)
        res.push_back(mat[i][left]);
        left++;
        }
    }
    return res;


}

int main()
{
    vector<vector<int>> mat {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9},
                            {10,11,12}};

    vector<int> res = spiralprint(mat);
    for(auto it : res)
    cout<<it<<" ";
}