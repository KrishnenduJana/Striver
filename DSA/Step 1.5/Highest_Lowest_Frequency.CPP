#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
    int arr[]={1,2,1,3,4,2,2,4,5,3,1,2,3,4,6,7,8,9,0,1,1,0,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> f;

    for(int i = 0; i<n;i++)
    f[arr[i]]++;

    // unordered_map<int, int>::iterator it;
    // for(it = f.begin();it!=f.end();it++)
    //cout<<it->first<<" ->"<<it->second<<endl;

    int max = f[arr[0]];
    int max_ele = arr[0];
    int min = f[arr[0]];
    int min_ele = arr[0];
    for(auto it:f)
    {
        if(it.second>max)
        {
            max = it.second;
            max_ele = it.first;
        }

        if(it.second<min)
        {
            min = it.second;
            min_ele = it.first;
        }
    }

    cout<<max_ele<<"-> "<<max<<" and "<<min_ele<<"-> "<<min;
    
}