// Problem Statement: You are given an array. The task is to reverse the array and print it.  using recursion
#include<iostream>
using namespace std;
void revese(int A[],int i, int n)
{
    
    if(i==n/2)
    return;
    int temp = A[i];
    A[i] = A[n-1-i];
    A[n-1-i] = temp;

    return revese(A,i+1,n);
}

int main()
{
    int A[]={1,2,3,4,5,6}    ;
    int n = sizeof(A)/sizeof(A[0]);

    revese(A,0,n);

    for(int i = 0; i<n;i++)
    cout<<A[i]<<" ";
}

/*

if(i<n)
    {
        int temp = A[i];
        A[i] = A[n-1-i];
        A[n-1-i] = temp;

        return revese(A,i+1,n-1);
    }

*/