//Problem Statement: Given a number N reverse the number and print it.
#include<iostream>
using namespace std;

int main()
{
    int N, reverse = 0;
    cout<<"Enter the number : "; cin>>N;

    while(N!=0)
    {
        int rem = N%10;
        reverse = reverse*10 + rem;
        N = N/10;
    }

    cout<<"Reverse is : "<<reverse;

}