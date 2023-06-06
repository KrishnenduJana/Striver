// C++ program for recursive implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;


void compare(int arr[], int i, int n)
{
    if(i==n-2)
    return ;

    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);

    return compare(arr, i+1,n);


}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	if(n==1)
    return ;
    
    // for(int i = 0;i<=n-2;i++)       //Here i<=n-2 cause of A[i]>A[i+1] -> i+1 leades to upto n-1
    // {
    //     if(arr[i]>arr[i+1])
    //     swap(arr[i],arr[i+1]);
    // }

    compare(arr,0,n);               // This is fully recursion

	bubbleSort(arr, n-1);
}

/* Function to print an array */
void printArray(int arr[], int n)
{
	for (int i=0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

// Driver program to test above functions
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	cout<<"Sorted array : \n";
	printArray(arr, n);
	return 0;
}

// Code improved by Susobhan Akhuli
