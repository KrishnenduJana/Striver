/*3 Sum : Find triplets that add up to a zero
Problem Statement: Given an array of N integers, your task is to find unique triplets that add up to give a sum of zero. In short, you need to return an array of all the unique triplets [arr[a], arr[b], arr[c]] such that i!=j, j!=k, k!=i, and their sum is equal to zero.
Example 1: 
Input: nums = [-1,0,1,2,-1,-4]

Output: [[-1,-1,2],[-1,0,1]]

Explanation: Out of all possible unique triplets possible, [-1,-1,2] and [-1,0,1] satisfy the condition of summing up to zero with i!=j!=k*/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
        // Algo : Sort -> Then check b + c = -a using two pointer for each distinct a in arr[].
        sort(nums.begin(), nums.end());

        vector<vector<int>> res;
        // here we need to find distinct a,b,c such that a + b + c = 0 => b + c = -a
        for(int i = 0; i<nums.size()-2; i++)    // This is the value of a from 0 to n-2 (last two left for b  and c)
        {
            if(i==0 || (i>0&&nums[i]!=nums[i-1]))       // This will help to ignore repeated 
            {
                int low = i + 1;
                int high = nums.size() - 1;
                int sum = 0 - nums[i];  //Sum = - a <- Target sum

                while(low<high)
                {
                    if(nums[low] + nums[high] == sum)   //Bingo we get a pair.
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);

                        res.push_back(temp);

                        while(low<high && nums[low] == nums[low+1]) low++;          //This will ignore the repeated b
                        while(low<high && nums[high] == nums[high-1]) high--;       // Ignore repeated c


                        low++;
                        high--;
                    }
                    else if(nums[low] + nums[high]<sum) low ++; //If b + c < -a then increase left (lower)
                    else high--;
                }
            }
        }

        return res;
    }


    /*vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size() && nums[i] <= 0; ++i) {
            if (i == 0 || nums[i - 1] != nums[i]) {
                twoSum(nums, i, res);
            }
        }

        return res;
    }

    void twoSum(vector<int>& nums, int i, vector<vector<int>>& res) {
        int low = i + 1;
        int high = nums.size() - 1;

        while (low < high) {
          int sum = nums[i] + nums[low] + nums[high];

          if (sum < 0) {
              ++low;
          } else if (sum > 0) {
              --high;
          } else {
              res.push_back({nums[i], nums[low++], nums[high--]});
              while (low < high && nums[low] == nums[low-1]) {
                  ++low;
              }
          }
        }
    }*/

int main()
{
    vector<int> arr { -1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(arr);
    for(int i = 0; i<res.size(); i++)
    {
        for(auto it : res[i])
        cout<<it<<" ";

        cout<<endl;
    }
}