// Problem Statement: Sliding window
// Optimize way : O(N)
#include<bits/stdc++.h>
using namespace std;

int max1(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int longsum(int arr[], int n, int k)        // Here k is window size.
{
    int sum = 0;
    int i = 0;      //Start of window
    int j = 0;      //End of sliding window

    int max_sum = INT32_MIN;

    while(j<n)
    {
        sum+=arr[i];

        if(j-i+1<k)     // Checkinh window size is achived or not.
        j++;
        else if(j-i+1 == k) //Window achived
        {
            max_sum = max1(max_sum, sum);
            sum = sum-arr[i];
            i--;
            j++;
        }


    }



    return max_sum;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    int res = longsum(arr,n,key);

    cout<<res;
}