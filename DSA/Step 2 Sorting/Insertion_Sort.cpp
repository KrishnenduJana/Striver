
#include <bits/stdc++.h>
using namespace std;

void inertionSort(int arr[],int n)
{
    for(int i = 0; i<=n-1;i++)
    {
        int j = i;
        while(j>0&&arr[j-1]>arr[j])     //if left small
        {
            swap(arr[j-1],arr[j]);      //then swap.
            j--;
        }
    }
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
	inertionSort(arr,n);
	cout<<"Sorted array : \n";
	printArray(arr, n);
	return 0;
}