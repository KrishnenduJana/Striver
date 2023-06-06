//Problem Statement: Given a number, print all the divisors of the number.
#include<iostream>
#include <vector>
#include<cmath>
using namespace std;

vector<int> divisior(int N)
{
    vector<int> div;
    for(int i = 1; i<sqrt(N)+1;i++)
    {
        if(N%i==0)
        div.push_back(i);
    }

    div.push_back(N);       //Cause N also divisior

    return div;
}

int main()
{
    vector<int> div;
    int N;
    cout<<"Enter positive number : "; cin>>N;
    div = divisior(N);

    cout<<"Divisiors are : ";
    for(int i = 0; i<div.size(); i++)
    cout<<div[i]<<" ";
}