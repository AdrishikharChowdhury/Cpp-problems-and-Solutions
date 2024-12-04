#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int fibo,n;
    cout<<"Enter the term number you want to print: ";
    cin>>n;
    fibo=fibonacci(n);
    cout<<n<<"th term is "<<fibo<<endl;
    return 0;
}
int fibonacci(int n)
{
    int i=1,ct,ft=0,st=1;
    while(i<n)
    {
        ct=ft+st;
        ft=st;
        st=ct;
        i+=1;
    }
    return ft;
}
