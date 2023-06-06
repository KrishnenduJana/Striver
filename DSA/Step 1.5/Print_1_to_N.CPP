//Problem Statement : Print 1 to N using recursion
#include<iostream>
using namespace std;
void print_Name(int N)
{    
    if(N>1)
    print_Name(N-1);

    cout<<N<<" ";
}

int main()
{
    int N = 5;
    print_Name(N);

}