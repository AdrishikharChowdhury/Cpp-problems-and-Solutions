#include<iostream>
using namespace std;
int deci_converter(int);
int main()
{
    int decimal,binary;
    cout<<"Enter the decimal number: ";
    cin>>binary;
    decimal=deci_converter(binary);
    cout<<"The decimal equivalent number is "<<decimal<<endl;
    return 0;
}
int deci_converter(int n)
{
    int rem,ans=0,pow=1;
    while(n>0)
    {
        rem=n%10;
        ans+=(rem*pow);
        pow*=2;
        n/=10;
    }
    return ans;
}