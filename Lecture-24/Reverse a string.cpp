#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"The string before reverse is "<<str<<endl;
    int i,n=str.length();
    for(i=0;i<n/2;i++)
    {
        swap(str[i],str[n-i-1]);
    }
    cout<<"The string after reverse is "<<str<<endl;
    return 0;
}