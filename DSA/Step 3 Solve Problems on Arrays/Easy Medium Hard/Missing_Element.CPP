// Given an array arr[] of size N-1 with integers in the range of [1, N],
// the task is to find the missing number from the first N integers.
#include<bits/stdc++.h>
using namespace std;

int missing(int arr[], int n)
{
    int hash[n+1] = {0};
    for(int i = 0; i<n; i++)
    hash[arr[i]-1] = 1;

    for(int i = 1; i<=n; i++)
    {
        if(hash[i] != 1)
        return i+1;
    }

}

int main()
{
    int arr[] = {1,2,3,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = missing(arr, n);

    cout<<"Missing is : "<<k;


}