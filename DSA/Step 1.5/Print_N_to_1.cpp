//Problem Statement : Print N to 1 using recursion
#include<iostream>
using namespace std;
void print_Name(int N)
{   
    cout<<N<<" "; 
    if(N>1)
    print_Name(N-1);    
}

int main()
{
    int N = 5;
    print_Name(N);

}