/*Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.

Examples:

Example 1:

Input: [100, 200, 1, 3, 2, 4]

Output: 4

Explanation: The longest consecutive subsequence is 1, 2, 3, and 4.*/

//Using Hash map (unordered_map) - O(N) by Asuming expext O(1) in hash insert.
#include<bits/stdc++.h>
using namespace std;

int LongestConsecutiveSequence(int arr[], int n)
{
    sort(arr, arr+n);

    int count = 1;
    int max_count = 1;

    for(int i = 0; i<n-1; i++)
    {
        if(arr[i]+1==arr[i+1])
        count++;
        
    }

    return count;
}

int main()
{
    int arr[] = {4,3,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = LongestConsecutiveSequence(arr, n);
    cout<<k;
}
