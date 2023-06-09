// Program to generate Pascal’s Triangle
// Type II
#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    int res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

vector<vector<int>> pascalTriangle(int N)
{
    vector<vector<int>> res;
    res[0].push_back(1);        //v[0] = {0}
    res[1].push_back(1);        //v[1] = {1,1}
    res[1].push_back(1);

    for(int n = 1; n<N; n++)
    {
        vector<int> temp;
        temp.push_back(1);
        for(int r = 1;  r<n; r++)
        {
            int sum = res[n-1][r-1]+res[n-1][r];        //v[i][j] = v[i-1][j-1] + v[i-1][j] where i = 0 -> N-1 and j = 1 to n-1
        }
        temp.push_back(1);

        res.push_back(temp);
    }

    return res;
}

int main()
{
    vector<vector<int>> res = pascalTriangle(6);

    for(int i = 0; i<res.size(); i++)
    {
        for(auto it : res[i])
        cout<<it<<" ";
        cout<<endl;
    }

    // cout<<nCr(4,4);
}