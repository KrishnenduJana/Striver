//Problem Statement : Print name N times using recursion
#include<iostream>
using namespace std;
void print_Name(int N)
{
    cout<<"Krishnendu - "<<N<<endl;
    if(N>0)
    print_Name(N-1);    
}

int main()
{
    int N = 5;
    print_Name(N);

}