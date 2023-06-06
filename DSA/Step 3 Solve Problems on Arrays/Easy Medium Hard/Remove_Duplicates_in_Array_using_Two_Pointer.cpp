//Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates 
//in place such that each unique element appears only once. The relative order of the elements should be kept the same.

//Using Two pointer & in-place

#include<bits/stdc++.h>
using namespace std;

// void removeDuplicate(int arr[], int n)
// {
//     int k = 0;

//     for(int j = 1;j<n;j++)
//     {
//         if(arr[k]!=arr[j])
//         {
//             k++;
//             arr[k] = arr[j];
//         }
//     }

//     for(int i = 0; i<=k;i++)
//     cout<<arr[i]<<" ";
// }

int removeDuplicate(int arr[], int n)
{
    int k = 0;

    for(int j = 1;j<n;j++)
    {
        if(arr[k]!=arr[j])
        {
            k++;
            arr[k] = arr[j];
        }
    }

    return k;
}

int main()
{
    int arr[] = {1,1,2,2,3,3,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = removeDuplicate(arr, n);

    for(int i = 0;i<=k;i++)
    cout<<arr[i]<<" ";    
}