#include<iostream>
using namespace std;
int main()
{
    int n,i=1,flag=1;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is NOT a prime number"<<endl;
    }
    return 0;
}