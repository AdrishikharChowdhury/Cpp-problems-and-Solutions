#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isAlphaNum(char );
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
bool isAlphaNum(char ch)
{
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z'))
    {
        return true;
    }
    else
        return false;
}
bool isPalindrome(string s) {
    int st=0,end=s.length()-1;
    while(st<end)
    {
        if(!isAlphaNum(s[st]))
        {
            st+=1;
            continue;
        }
        if(!isAlphaNum(s[end]))
        {
            end-=1;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end]))
        {
            return false;
        }
        st+=1;
        end-=1;
    }
    return true;
}