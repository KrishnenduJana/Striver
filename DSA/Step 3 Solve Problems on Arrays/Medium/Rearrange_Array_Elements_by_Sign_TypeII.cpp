// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
//  Without altering the relative order of positive and negative elements,
// you must return an array of alternately positive and negative values.
// Striver : Varity 2
/*Input:
arr[] = {1,2,-4,-5, 1, 3}, N = 6
Output:
1 -4 2 -5 1 3*/

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(int arr[], int n)
{
    vector<int> pos;
    vector<int> neg;
    vector<int> res;

    for(int i = 0; i<n; i++)
    {
        if(arr[i]>=0)
        pos.push_back(arr[i]);
        else
        neg.push_back(arr[i]);
    }

    int n1 = pos.size();
    int n2 = neg.size();

    int i1 = 0;
    int i2 = 0;

    while(i1<n1&&i2<n2)
    {
        res.push_back(pos[i1++]);
        res.push_back(neg[i2++]);
    }
    while(i1<n1)
    res.push_back(pos[i1++]);

    while(i2<n2)
    res.push_back(neg[i2++]);

    return res;

}

void printarray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,-3,-4,-1,-2,3,4, 1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> res = rearrange(arr, n);
    for(auto it : res)
    cout<<it<<" ";

}