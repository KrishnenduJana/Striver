//Problem Statement: Given an array of size n, write a program to check if the given array is sorted in
// (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.
#include<bits/stdc++.h>
using namespace std;

bool isAscending(int arr[], int n)
{
    for(int i = 0; i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        return false;            
    }
    
    return true;
}
    

bool isDescending(int arr[], int n)
{
    for(int i = 0; i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        return false;            
    }
    
    return true;
}

bool arraySortedOrNot(int arr[], int n) {
    // code here
    bool check_asc = isAscending(arr, n);
    bool check_desc = isDescending(arr, n);
    
    if(check_asc==true || check_desc ==true)
    return true;
    else
    return false;
}

int main()
{
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool sorted = arraySortedOrNot(arr, n);

    if(sorted==true)
    cout<<"Sorted";
    else
    cout<<"Not sorted";
}