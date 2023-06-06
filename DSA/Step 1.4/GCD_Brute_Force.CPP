//Problem Statement: Find gcd of two numbers.
/*  Algorithm : Brute Force */

#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    int min = a;
    if(a>b)     //Finding minimum
    min = b;

    int gcd = 1;
    for(int i = 2; i<min; i++)
    {
        if(a%i==0 && b%i==0)
        gcd = i;
    }

    return gcd;

}

int main()
{
    int a,b;
    cout<<"Enter two positive number (a,b) : "; cin>>a>>b;

    cout<<"GCD : "<<GCD(a,b);
}