#include<iostream>
using namespace std;
bool checkPrime(int);
int main()
{
    int i,n;
    bool flag;
    cout<<"Enter the limit.: ";
    cin>>n;
    cout<<"The prime numbers are: "<<endl;
    for(i=2;i<=n;i++)
    {
        flag=checkPrime(i);
        if(flag)
            cout<<i<<"\t";
    }
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