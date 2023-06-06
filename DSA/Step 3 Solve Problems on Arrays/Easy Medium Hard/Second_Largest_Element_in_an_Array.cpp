//Problem Statement: Given an array, we have to second the largest element in the array.
#include<bits/stdc++.h>
using namespace std;

int maxarray(int A[], int n)
{
    int max1 = A[0];
    int max2;
    for(int i = 1; i<n; i++)
    {
        if(A[i]>max1)
        {
            max2 = max1;
            max1 = A[i];

        }
    }
    return max2;
}
int main()
{
    int A[] = {3};
    int n = sizeof(A)/sizeof(A[0]);

    if(n<2)
    cout<<"Array is doe not contain more than one element";
    else
    {
        int k = maxarray(A,n);
        cout<<k;
    }
}