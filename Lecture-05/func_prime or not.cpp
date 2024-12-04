#include<iostream>
using namespace std;
bool checkPrime(int);
int main()
{
    int n;
    bool flag;
    cout<<"Enter the no.: ";
    cin>>n;
    flag=checkPrime(n);
    if(flag)
        cout<<n<<" is a prime number"<<endl;
    else
        cout<<n<<" is NOT a prime number"<<endl;
    return 0;
}
bool checkPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}