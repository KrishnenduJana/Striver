//Union using unordered_map
//Not ordered form
#include<bits/stdc++.h>
using namespace std;

vector<int> union1(int arr1[], int n1, int arr2[], int n2)
{
    vector<int> v;
    unordered_map<int, int> f;
    for(int i = 0; i<n1; i++)
    f[arr1[i]]++;

    for(int i = 0; i<n1; i++)
    {
        if(f[arr2[i]]>0)
        continue;
        else
        f[arr2[i]]++;
    }

    for(auto it : f)
    {
        if(it.second>0)
        v.push_back(it.first);
    }

    return v;
}



int main()
{
    int arr1[] = {1,2,0,0,0,2,3,4,5,0, 9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {1,2,0,0,0,2,3,4,5,0,8};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    

    vector<int> v = union1(arr1, n1, arr2, n2);

    for(auto it: v)
    cout<<it<<" ";


}

/*Time Compleixty : O( (m+n)log(m+n) ) . Inserting a element in set takes logN time, where N is no of elements in set. At max set can store m+n elements {when there are no common elements and elements in arr,arr2 are distntict}. So Inserting m+n th element takes log(m+n) time. Upon approximation across inserting all elements in worst it would take O((m+n)log(m+n) time.

Using unordered_set also takes the same time, On average insertion in unordered_set takes O(1) time but sorting the union vector takes O((m+n)log(m+n))  time. Because at max union vector can have m+n elements.

Space Complexity : O(m+n) {If Space of Union Vector is considered} 

O(1) {If Space of union Vector is not considered}*/