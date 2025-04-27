#include<iostream>
using namespace std;
int factorial(int);
int combination(int,int);
int main()
{
    int n,ans,r;
    cout<<"Enter the n: ";
    cin>>n;
    cout<<"Enter the r: ";
    cin>>r;
    if(r>n)
    {
        cout<<"Combination is not possible";
    }
    else
    {
        ans=combination(n,r);
        cout<<n<<"C"<<r<<" is "<<ans<<endl;
    }
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
int combination(int n,int r)
{
    int R=factorial(r);
    int N=factorial(n);
    int NR=factorial(n-r);
    return N/(R*NR);
}