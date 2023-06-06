//Problem Statement: Given an array, we have to find the largest element in the array.
#include<bits/stdc++.h>
using namespace std;

int maxarray(int A[], int n)
{
    int max = A[0];
    for(int i = 1; i<n; i++)
    {
        if(A[i]>max)
        max = A[i];
    }
    return max;
}
int main()
{
    int A[] = {3,2,1,4,5,6,7,8,10};
    int n = sizeof(A)/sizeof(A[0]);
    int k = maxarray(A,n);
    cout<<k;
}