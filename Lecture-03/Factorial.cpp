#include<iostream>
using namespace std;
int main()
{
    int n,i=1,fact=1;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}