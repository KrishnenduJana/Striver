//Problem Statement: Given an array of N integers, left rotate the array by one place.
#include<bits/stdc++.h>
using namespace std;

void rotateRight(int arr[], int n, int k)
{
    int arr1[n];
    for(int i = 0; i<n;i++)
    {
        arr1[(n+i+k)%n] = arr[i];
    }

    for(int i = 0; i<n;i++)
    {
        arr[i] = arr1[i];
    }
}

void rotateLeft(int arr[], int n, int k)
{
    int arr1[n];
    for(int i = 0; i<n;i++)
    {
        arr1[(n+i-k)%n] = arr[i];
    }

    for(int i = 0; i<n;i++)
    {
        arr[i] = arr1[i];
    }
}


void printarray(int arr[], int n)
{
    for(int i = 0; i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;
    printarray(arr, n);

    rotateRight(arr, n, k);
    // printarray(arr, n);

    // rotateLeft(arr, n, k);
    // rotateLeft(arr, n, k);
    printarray(arr, n);
}