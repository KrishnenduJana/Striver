//Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.
//Select minimum_index -> swap-> increase iterator.
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
    int A[]={4, 1, 3, 9, 7};

    int n = sizeof(A)/sizeof(A[0]);

    for(int i = 0; i<n-1;i++)       //i indicates the number of steps perform
    {
        int min_index = i;
        for(int j = i+1; j<n;j++)
        {
            if(A[min_index]>A[j])
            min_index = j;      //Here we selecting minimum from the rest unsorted sub array.
        }
        swap(A[i],A[min_index]);
    }

    for(int i = 0; i<n;i++)
    cout<<A[i]<<" ";
    
}