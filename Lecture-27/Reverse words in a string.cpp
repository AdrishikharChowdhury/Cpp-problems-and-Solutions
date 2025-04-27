#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string reverseWords(string);
int main() {
    string sentence;
    cout<<"Enter a sentence to reverse its words: ";
    getline(cin,sentence);
    string reverseSentence=reverseWords(sentence);
    cout<<"The reversed sentence is "+reverseSentence<<endl;
    return 0;
}

string reverseWords(string s) {
    int len=s.length(),i;
    string ans="";
    reverse(s.begin(),s.end());
    for(i=0;i<len;i++)
    {
        string word="";
        while(i<len && s[i]!=' '){
            word+=s[i];
            i+=1;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0)
        {
            ans+=" "+word;
        }
    }
    return ans.substr(1);
}