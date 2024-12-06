#include<iostream>
using namespace std;
bool powerofTwo(int);
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(powerofTwo(num))
    {
        cout<<"The number is a power of two"<<endl;
    }
    else{
        cout<<"The number is NOT a power of two"<<endl;
    }
    return 0;
}
bool powerofTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}