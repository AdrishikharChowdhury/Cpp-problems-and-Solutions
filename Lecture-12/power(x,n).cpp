#include<iostream>
using namespace std;
double myPow(double,int);
int main()
{
    double x;
    int n;
    cout<<"Enter the base: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>n;
    double ans=myPow(x,n);
    cout<<"The ans is "<<ans<<endl;
    return 0;
}
double myPow(double x, int n) {
    long binform=n;
    if(n<0)
    {
        binform=-binform;
        x=1/x;
    }
    double ans=1;
    while(binform>0)
    {
        if(binform%2==1)
        {
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    return ans;
}