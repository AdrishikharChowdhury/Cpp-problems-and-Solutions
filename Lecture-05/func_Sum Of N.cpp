#include<iostream>
using namespace std;
int sumOfn(int);
int main()
{
    int n,sum;
    cout<<"Enter the limit: ";
    cin>>n;
    sum=sumOfn(n);
    cout<<"Sum of "<<n<<" is "<<sum<<endl;
    return 0;
}
int sumOfn(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}