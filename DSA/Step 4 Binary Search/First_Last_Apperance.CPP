// Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key.
// If the target is not found then return -1.
// Neive Approach is brute force with O(n) times complexity
// Bettet times complexity is O(log(n))
#include<bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    int first;
    while(low<=high)
    {   int mid = (low+high)/2; 
        if(arr[mid]==key)
        {
            first = mid;
            high = mid-1;                   //For First Change high to mid -1;
        }
        else if(arr[mid]>key)
        high = mid-1;
        else
        low = mid + 1;
    }
    return first;
}

int lastOccurance(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    int last;
    while(low<=high)
    {   int mid = (low+high)/2; 
        if(arr[mid]==key)
        {
            last = mid;
            low = mid+1;                //For last change low to mid + 1;
        }
        else if(arr[mid]>key)
        high = mid-1;
        else
        low = mid + 1;
    }
    return last;
}

int main()
{
    int arr[] = {5,7,7,8,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 8;
    int res1 = firstOccurance(arr,n,key);
    int res2 = lastOccurance(arr,n,key);
    cout<<"1st Apperance of "<<key << " is at index : " <<res1<<endl;
    cout<<"last Apperance of "<<key << " is at index : " <<res2<<endl;
}

