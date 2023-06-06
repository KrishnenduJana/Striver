/* Iterative C program for merge sort */
#include <bits/stdc++.h>
using namespace std;

/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(int arr[], int l, int m, int r);

// Utility function to find minimum of two integers
int min(int x, int y) { return (x<y)? x :y; }


/* Iterative mergesort function to sort arr[0...n-1] */
void mergeSort(int arr[], int n)
{
int curr_size; // For current size of subarrays to be merged
				// curr_size varies from 1 to n/2
int low; // For picking starting index of left subarray
				// to be merged

// Merge subarrays in bottom up manner. First merge subarrays of
// size 1 to create sorted subarrays of size 2, then merge subarrays
// of size 2 to create sorted subarrays of size 4, and so on.
for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size)		//Size increase as 1,2,4,8,...
{
	// Pick starting point of different subarrays of current size
	for (low=0; low<n-1; low = low + 2*curr_size)
	{
		// Find ending point of left subarray. mid+1 is starting
		// point of right
		int mid = min(low + curr_size - 1, n-1);

		int high = min(low + 2*curr_size - 1, n-1);

		// Merge Subarrays arr[low...mid] & arr[mid+1...high]
		merge(arr, low, mid, high);
	}
}
}

/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(int arr[], int low, int mid, int high)
{
    int i1 = low;
    int i2 = mid + 1;
    int B[high-low+1];

    int k = 0;

    while(i1<=mid&&i2<=high)
    {
        if(arr[i1]>arr[i2])
        {
            B[k++] = arr[i2++];
        }
        else
        {
            B[k++] = arr[i1++];
        }        
    }

    while(i1<=mid)
    B[k++] = arr[i1++];

    while(i2<=high)
    B[k++] = arr[i2++];


    for(int i = low; i<=high; i++)
    arr[i] = B[i-low];
}

/* Function to print an array */
void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout <<" "<< A[i];
	cout <<"\n";
}

/* Driver program to test above functions */
int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7,-1};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout <<"Given array is \n ";
	printArray(arr, n);

	mergeSort(arr, n);

	cout <<"\nSorted array is \n ";
	printArray(arr, n);
	return 0;
}
// This code is contributed shivanisinghss2110
