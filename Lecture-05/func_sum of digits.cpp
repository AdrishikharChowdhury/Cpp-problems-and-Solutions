#include<iostream>
using namespace std;
int sumOfdigits(int);
int main()
{
    int n,sum;
    cout<<"Enter the no.: ";
    cin>>n;
    sum=sumOfdigits(n);
    cout<<"Sum of digits of "<<n<<" is "<<sum<<endl;
    return 0;
}
int sumOfdigits(int n)
{
    int sum=0,r,q=n;
    while(q>0)
    {
        r=q%10;
        sum+=r;
        q/=10;
    }
    return sum;
}