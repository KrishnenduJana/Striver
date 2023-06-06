//Problem Statement:  Given a number check if it is a palindrome.
#include<iostream>
using namespace std;

int check_palindrome(int N)
{
    int reverse = 0;
    while(N!=0)
    {
        int rem = N%10;
        reverse = reverse*10 + rem;
        N = N/10;
    }
    return reverse;
}

int main()
{
    int N, reverse = 0;
    cout<<"Enter the number : "; cin>>N;

    if(check_palindrome(N)==N)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";

}