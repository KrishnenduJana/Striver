// Recursive C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;

// Recursive function to sort an array using
// insertion sort
void insertionSortRecursive(int arr[], int n)
{
	// Base case
	if (n == 1)
		return;

	// Sort first n-1 elements
	insertionSortRecursive( arr, n-1);      //This will decrease the value of n and n will be stored in stack.

	int j = n-1;                            //In first j = 2-1

	/* Move elements of arr[0..i-1], that are	greater than key, to one position ahead	of their current position */
	while (j > 0 && arr[j-1] > arr[j])
	{
		swap(arr[j-1], arr[j]);
		j--;
	}
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
	for (int i=0; i < n; i++)
		cout << arr[i] <<" ";
}

/* Driver program to test insertion sort */
int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);

	insertionSortRecursive(arr, n);
	printArray(arr, n);

	return 0;
}
