// Program to generate Pascal’s Triangle
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
    for(int n = 0; n<N; n++)
    {
        vector<int> temp;
        for(int r = 0;  r<=n; r++)
        temp.push_back(nCr(n,r));

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