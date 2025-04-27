#include<iostream>
using namespace std;
int reverdo(int);
int main()
{
    int num,reverseInt;
    cout<<"Enter the number: ";
    cin>>num;
    reverseInt=reverdo(num);
    cout<<"The reversed number is "<<reverseInt<<endl;
    return 0;
}
int reverdo(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum=(10*sum)+r;
        n/=10;
    }
    return sum;
}