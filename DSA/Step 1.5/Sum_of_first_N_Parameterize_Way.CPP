    //Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers using Recurssion.
    //Parameterize way
    #include<iostream>
    using namespace std;

    int sum_N(int N, int sum)
    {
        if(N==0)
        return sum;
        else
        return sum_N(N-1,sum + N);
    }

    int main()
    {
        int N;
        cout<<"Enter the term (N): "; cin>>N;
        cout<<"Sum is : "<<sum_N(N,0);
        
    }