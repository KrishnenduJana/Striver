    //Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers using Recurssion.
    //Functional way
    #include<iostream>
    using namespace std;

    int sum_N(int N)
    {
        if(N==0)
        return 0;
        else
        return sum_N(N-1)+N; //S_n = S_{n-1} + N
    }

    int main()
    {
        int N;
        cout<<"Enter the term (N): "; cin>>N;
        cout<<"Sum is : "<<sum_N(N);        
    }