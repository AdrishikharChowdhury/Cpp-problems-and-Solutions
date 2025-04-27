#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int n,fact;
    cout<<"Enter the no.: ";
    cin>>n;
    fact=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}