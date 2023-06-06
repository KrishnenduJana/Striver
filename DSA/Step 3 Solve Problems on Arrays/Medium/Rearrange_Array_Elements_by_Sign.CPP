// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
//  Without altering the relative order of positive and negative elements,
// you must return an array of alternately positive and negative values.
// Striver : Varity 1
/*Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5*/

#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int res[n];
    int pos = 0;
    int neg = 1;

    for(int i = 0; i<n ; i++)
    {
        if(arr[i]>0)
        {
            res[pos]=arr[i];
            pos = pos + 2;
        }
        else
        {
            res[neg] = arr[i];
            neg = neg + 2;
        }
    }

    for(int i = 0; i<n ; i++)
    arr[i] = res[i];
}

void printarray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,-3,-4,-1,-2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr, n);
    printarray(arr, n);

}