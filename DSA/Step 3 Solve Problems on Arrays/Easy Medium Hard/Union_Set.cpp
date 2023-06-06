//Union using Set.
//ordered form
#include<bits/stdc++.h>
using namespace std;

set<int> union1(int arr1[], int n1, int arr2[], int n2)
{
    set<int> S;
    
    for(int i = 0; i<n1; i++)
    S.insert(arr1[i]);

    for(int i = 0; i<n1; i++)
    S.insert(arr2[i]);
    return S;
}



int main()
{
    int arr1[] = {1,2,0,0,0,2,3,4,5,0, 9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {1,2,0,0,0,2,3,4,5,0,8};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    

    set<int> S = union1(arr1, n1, arr2, n2);

    for(auto it: S)
    cout<<it<<" ";


}