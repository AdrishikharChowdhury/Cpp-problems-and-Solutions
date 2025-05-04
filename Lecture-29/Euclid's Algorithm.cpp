#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int,int);
int main(){
    int a,b,ans;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    ans=gcd(a,b);
    cout<<"The GCD of the numbers are "<<a<<" and "<<b<<" are "<<ans<<endl;
    return 0;
}

int gcd(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a%=b;
        }
        else
        {
            b%=a;
        }
    }
    if(a==0)
    {
        return b;
    }
    else{
        return a;
    }
}