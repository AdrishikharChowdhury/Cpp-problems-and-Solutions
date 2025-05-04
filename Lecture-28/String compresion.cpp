#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int compress(vector<char> &);

int main() {
    vector<char> info;
    int n,i;
    char val;
    cout<<"Enter the size of the string: ";
    cin>>n;
    cout<<"Enter the information string: "<<endl;
    for(i=0;i<n;i++){
        cin>>val;
        info.push_back(val);
    }
    compress(info);
    cout << "The compressed string is: ";
    for(char c : info) 
    {
        cout << c;
    }
    cout << endl;
    return 0;
}

int compress(vector<char>& chars) {
    int idx=0,i,n=chars.size(),count=0;
    char ch;
    string digits;
    for(i=0;i<n;){
        ch=chars[i];
        count=0;
        while(i<n && chars[i]==ch)
        {
            count+=1;
            i+=1;
        }
        if(count==1)
        {
            chars[idx++]=ch;
        }
        else{
            chars[idx++]=ch;
            digits=to_string(count);
            for(char digit:digits)
            {
                chars[idx++]=digit;
            }
        }
    }
    chars.resize(idx);
    return idx;
}