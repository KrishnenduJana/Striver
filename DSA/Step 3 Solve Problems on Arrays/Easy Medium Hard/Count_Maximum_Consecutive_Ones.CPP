// Problem Statement: Given an array that contains only 1 and 0 
// return the count of maximum consecutive ones in the array.
// One kind of two pointer.

#include<bits/stdc++.h>
using namespace std;

int countMaximumCons1(int arr[], int n)
{
    int count = 0;
    int max_count = 0;

    for(int i = 0; i<n; i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else
        {
            if(count>=max_count)
            max_count = count;

            count = 0;
        }

    }
    return max_count;
}

int main()
{
    int arr[] = {1,1,1,1,1,1,1,2,2,2,0,0,1,1,1,1,1,2,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_one = countMaximumCons1(arr, n);

    cout<<max_one;


}