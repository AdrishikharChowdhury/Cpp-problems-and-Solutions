#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string removeOccurrences(string,string );
int main() {
    string str1,str2;
    cout<<"Enter main string: ";
    getline(cin,str1);
    cout<<"Enter substring: ";
    getline(cin,str2);
    str1=removeOccurrences(str1,str2);
    cout<<"After removing occurrences we get: "<<str1<<endl;
    return 0;
}
string removeOccurrences(string s, string part) {
    while(s.find(part)<s.length() && s.length()>0)
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
