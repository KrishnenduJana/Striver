//Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

#include<iostream>
#include<vector>
using namespace std;

vector<int> fib(vector<int> v, int N)
{
    if(v.empty()==true)
    {
        v.push_back(0);
        v.push_back(1);
    }

    if(N==0)
    return v;

    int sum = v[v.size()-1] + v[v.size()-2];
    v.push_back(sum);

    return fib(v,N-1);
}

int main()
{
    int N = 9;
    vector<int> A, B;
    B = fib(A,N);

    for(int i = 0 ; i<N; i++)
    cout<<B[i]<<" ";


}