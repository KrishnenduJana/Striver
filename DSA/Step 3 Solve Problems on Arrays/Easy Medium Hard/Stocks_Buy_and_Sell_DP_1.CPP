// Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day
// Return maximum profit
// Stocks DP Set 1

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int n)
{
    int min_cost = arr[0];
    int max_profit = 0;
    for(int i = 1; i<n ;i++)
    {
        int cost = arr[i] - min_cost;
        min_cost = min(arr[i], min_cost);
        max_profit = max(max_profit, cost);
    }

    return max_profit;
}

int main()
{
    int arr[] = {7,1,5,3,6,4};
    // int arr[] = {5,4,3,2,1};     //This types has no profit since it is decreasing
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = maxProfit(arr, n);

    if(k==0)
    cout<<"No Profit";
    else
    cout<<"Profit = "<<k;
}