#include<iostream>
using namespace std;

string reverse(string S1, string S2)
{
    if(S1.empty()==true)
    return S2;

    int n = S1.length();
    S2.push_back(S1[n-1]);
    S1.pop_back();
    return reverse(S1, S2);
}

int main()
{
    string S1 = "Krishnendu", S2 = "";
    S2 = reverse(S1,S2);
    for(int i = 0;S2[i]!='\0';i++)
    std::cout<<S2[i];

}

