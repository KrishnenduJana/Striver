//Problem Statement: Given a number, check whether it is prime or not.
#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int N)
{
    if(N==2)    
    return true;
    
    for(int i = 2; i<sqrt(N)+1;i++)
    {
        if(N%i==0)
        return false;
    }
    return true;
}

int main()
{
    
    int N;
    cout<<"Enter positive number : "; cin>>N;
    if(isprime(N)==true)
    cout<<"Prime";
    else
    cout<<"Not Prime";

    
}