//Problem Statement: Given a number, check if it is Armstrong Number or Not.
#include<iostream>
#include<cmath>
using namespace std;

int digits(int N)
{
    int count = 0;
    while(N!=0)
    {
        count++;
        N = N/10;
    }

    return count;
}

bool check_armstrong(int N)
{
    int sum = 0;
    int tempN = N;
    for(int i = 0; i<digits(N);i++)
    {
        sum += pow(tempN%10,digits(N));
        tempN = tempN/10;
    }

    if(sum == N)
    return true;
    else
    return false;
}

int main()
{
    int N;
    cout<<"Enter positive no (N) : "; cin>>N;

    if(check_armstrong(N)==true)
    cout<<"Armstrong";
    else
    cout<<"Not Armstrong";


}