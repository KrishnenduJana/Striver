//Union using Two Pointer (two arrays are sorted given)
//Not ordered form
#include<bits/stdc++.h>
using namespace std;


//Incompleted

vector<int> union1(int arr1[], int n1, int arr2[], int n2)
{
    vector<int> v;
    for(int i = 0; i<n1; i++)
    v.push_back(arr1[i]);   //Inserted all elements of arr1

    int i1 = 0;              //One pointer
    int i2 = 0;              //Two pointer


    while(i1<n1&&i2<n2)
    {
        if(arr1[i1]==arr2[i1])
        i1 = 2; //Incomplete.

    }
    
    

    return v;
}



int main()
{
    int arr1[] = {0,1,2,4,7,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {2,3,4,5,6,7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    

    vector<int> v = union1(arr1, n1, arr2, n2);

    for(auto it: v)
    cout<<it<<" ";


}