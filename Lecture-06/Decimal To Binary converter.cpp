#include<iostream>
using namespace std;
int bin_converter(int);
int main()
{
    int decimal,binary;
    cout<<"Enter the decimal number: ";
    cin>>decimal;
    binary=bin_converter(decimal);
    cout<<"The binary equivalent number is "<<binary<<endl;
    return 0;
}
int bin_converter(int n)
{
    int rem,ans=0,pow=1;
    while(n>0)
    {
        rem=n%2;
        ans+=(rem*pow);
        pow*=10;
        n/=2;
    }
    return ans;
}