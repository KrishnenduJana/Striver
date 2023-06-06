//Problem Statement: Find gcd of two numbers.
/*  Algorithm : if b>a then GCD(a,b) = GCD(b%a,a) with GCD(0,b) = b  */

#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(a>b)     //Checking b>a of not
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if(a==0)        //G(0,b) = b
    return b;

    return GCD(b-a,a);  //GCD(a,b) = GCD(b%a,a)
}

int main()
{
    int a,b;
    cout<<"Enter two positive number (a,b) : "; cin>>a>>b;

    cout<<"GCD : "<<GCD(a,b);
}