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
    if(n<=0)
    {
        return false;
    }
    while(n>1)
    {
        if(n%2!=0)
        {
            return false;
        }
        n/=2;
    }
    return true;
}