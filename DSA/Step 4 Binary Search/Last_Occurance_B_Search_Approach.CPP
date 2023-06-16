// Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key.
// If the target is not found then return -1.
// Neive Approach is brute force with O(n) times complexity
// Bettet times complexity is O(log(n))
#include<bits/stdc++.h>
using namespace std;

int lastOccurance(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    int res;
    while(low<=high)
    {   int mid = (low+high)/2; 
        if(arr[mid]==key)
        {
            res = mid;
            low = mid+1;
        }
        else if(arr[mid]>key)
        high = mid-1;
        else
        low = mid + 1;
    }
    return res;
}

int main()
{
    int arr[] = {3,4,13,13,13,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 13;
    int res = lastOccurance(arr,n,key);
    cout<<"Last Apperance of "<<key << " is at index : " <<res;
}
