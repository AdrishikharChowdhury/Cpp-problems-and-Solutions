#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<"The sum of "<<n<<" is "<<sum<<endl;
    return 0;
}