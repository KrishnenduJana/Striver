//Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.
//Check consecutive two element -> swap (Adjacent swap)
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int A[]={3,2,1,4,5,6,-1,-7,7};

    int n = sizeof(A)/sizeof(A[0]);

    for(int i = 0; i<=n-1;i++)       //i indicates the number of steps perform
    {
        for(int j = 0; j<=n-i-1;j++)
        {
            if(A[j]>A[j+1])
            swap(A[j],A[j+1]);      //Adjacent Swaps
        }        
    }

    for(int i = 0; i<n;i++)
    cout<<A[i]<<" ";
    
}