    //Problem statement: Given a number ‘N’, find out factorial using Recurssion.
    //Functional way
    #include<iostream>
    using namespace std;

    int fact_N(int N)
    {
        if(N==1)
        return 1;
        else
        return N*fact_N(N-1); //N! = N * (N-1)!
    }

    int main()
    {
        int N;
        cout<<"Enter the term (N): "; cin>>N;
        cout<<"Sum is : "<<fact_N(N);        
    }