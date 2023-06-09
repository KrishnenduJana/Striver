/*Problem Statement: Given an array of N integers.
Find the elements that appear more than N/3 times in the array. If no such element exists, return an empty vector.*/
// Optimal - Extended Boyer Moore’s Voting Algorithm
// Two Steps Required - 1) Applying Moor's Vooting Algo 2) Veryfying 

#include<bits/stdc++.h>
using namespace std;

vector<int> majority3(vector<int>& nums) {
    //Applying Moor's Voting Algo
    int count1 = 0, count2 = 0, major_elem1 = INT_MIN, major_elem2 = INT_MIN;
    for(int i = 0; i<nums.size(); i++)
    {
        if(count1==0&&nums[i]!=major_elem2)
        {
            count1 = 1;
            major_elem1 = nums[i];
        }
        else if(count2==0&&nums[i]!=major_elem1)
        {
            count2 = 1;
            major_elem2 = nums[i];
        }
        else if(major_elem1 == nums[i])
        count1++;
        else if(major_elem2 == nums[i])
        count2++;
        else
        {
            count1--;
            count2--;
        }
    }

    //Verifying Process
    count1 = 0;
    count2 = 0;
    for(int i = 0; i<nums.size(); i++)
    {
        if(nums[i]==major_elem1) count1++;
        if(nums[i]==major_elem2) count2++;
    }

    vector<int> res;

    if(count1>=((nums.size())/3+1))
    res.push_back(major_elem1);

    if(count2>=((nums.size())/3+1))
    res.push_back(major_elem2);

    return res;
    
}

int main()
{
    vector<int> arr  {11, 33, 33, 11, 33, 11};

    vector<int> res = majority3(arr);
    if(res.empty()==true)
    cout<<"No majority element exists";
    else
    for(auto it : res)
    cout<<it<<" ";
}