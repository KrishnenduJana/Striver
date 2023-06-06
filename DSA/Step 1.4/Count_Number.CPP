//Problem Statement: Given an integer N , write program to count number of digits in N.
#include<iostream>
using namespace std;

int main()
{
    int N;
    int count = 0;
    cout<<"Enter Number : "; cin>>N;

    while(N!=0)
    {
        N = N/10;
        count++;
    }

    cout<<"No of Digits are : "<<count;
}