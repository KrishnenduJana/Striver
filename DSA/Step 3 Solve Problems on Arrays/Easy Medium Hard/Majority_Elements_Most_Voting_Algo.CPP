// Problem Statement: Given an array of N integers, write a program to return an element that 
// occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

#include<bits/stdc++.h>
using namespace std;


int majorElem(int arr[], int n)
{
    int major_elem = arr[0];
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        if(count == 0)
        {
            count = 1;
            major_elem = arr[i];
        }

        if(arr[i]==major_elem)
        count++;
        else
        count--;
    }

    count = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==major_elem)
        count++;
    }

    if(count>n/2)
    return major_elem;
    else
    return -1;

}

int main()
{
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = majorElem(arr, n);

    cout<<"Majority Element : "<<res;


}