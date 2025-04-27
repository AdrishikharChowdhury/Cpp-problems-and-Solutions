#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPalindrome(string );
int main() {
    string str;
    bool yon;
    cout<<"Enter a string: ";
    getline(cin,str);
    yon=isPalindrome(str);
    if(yon)
        cout<<"The string is Palindrome"<<endl;
    else
        cout<<"The string is not Palindrome"<<endl;
    return 0;
}
bool isPalindrome(string str)
{
    int i,n=str.length();
    for(i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            return false;
        }
    }
    return true;
}