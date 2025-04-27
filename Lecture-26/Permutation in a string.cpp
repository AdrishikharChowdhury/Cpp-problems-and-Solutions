#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isFreqSame(int a[],int b[]);
bool checkInclusion(string ,string);
int main() {
    string s1,s2;
    cout<<"Enter the main string: ";
    getline(cin,s1);
    cout<<"Enter the substring: ";
    getline(cin,s2);
    bool found=checkInclusion(s2,s1);
    if(found){
        cout<<"The substring is found in main string"<<endl;
    }
    else{
        cout<<"The substring isn't found"<<endl;
    }
    return 0;
}
bool isFreqSame(int a[],int b[])
{
    for(int i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
    int i,freq[26]={0},n=s1.length(),N=s2.length();
    for(i=0;i<n;i++)
    {
        freq[s1[i]-'a']+=1;
    }
    int windSize=n;
    for(i=0;i<N;i++)
    {
        int windIdx=0,idx=i;
        int windFreq[26]={0};
        while(windIdx<windSize && idx<N)
        {
            windFreq[s2[idx]-'a']+=1;
            windIdx+=1;
            idx+=1;
        }
        if(isFreqSame(freq,windFreq)){
            return true;
        }
    }
    return false;
}