#include<iostream>
using namespace std;

string reverse(string S1, int start, int end)
{
    if(start>=end)
    return S1;
    swap(S1[start], S1[end]);
    return reverse(S1, start+1, end-1);
}

int main()
{
    string S1 = "Krishnendu", S2;
    S2 = reverse(S1, 0, 9);
    for(int i = 0;S2[i]!='\0';i++)
    std::cout<<S2[i];
}

