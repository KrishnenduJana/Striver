/*Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.

Examples:

Example 1:
Input:
 arr = [4, 7, 1, 0]
Output:
 7 1 0
Explanation:
 Rightmost element is always a leader. 7 and 1 are greater than the elements in their right side.*/
#include<bits/stdc++.h>
using namespace std;

vector<int> LeaderInArray(int arr[], int n)
{
    vector<int> lead_v;
    int leader = arr[n-1];
    
    for(int i = n-1; i>=0; i--)
    {
        if(arr[i]>=leader)
        {
            lead_v.push_back(arr[i]);
            leader = arr[i];
        }
    }
    reverse(lead_v.begin(), lead_v.end());
    return lead_v;
}

int main()
{
    // int arr[] = {10, 22, 12, 3, 0, 6};
int arr[] = {16 ,17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> res = LeaderInArray(arr,n);

    for(auto it : res)
    cout<<it<<" ";
}