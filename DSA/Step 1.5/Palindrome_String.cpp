//Problem Statement: “Given a string, Check palindrome string” 
#include<iostream>
#include<string.h>
using namespace std;

string reverse(string S1)
{
    string S2 = "";

    for(int i = 0; S1[i]!='\0'; i++)        //C++ uses a marker, the null character, denoted by '\0', to indicate the end of the string. Note: A string is different from an array of characters in that the null character is at the end of the string.
    S2 = S1[i] + S2;

    return S2;
}

bool check_palindrome(string S1)
{
    string S2 = reverse(S1);
    for(int i = 0; S1[i]!='\0';i++)
    {
        if(S1[i]!=S2[i])
        return false;
    }
    return true;
    
}


int main()
{
    string S1 = "madam";
    if(check_palindrome(S1)==true)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    
}