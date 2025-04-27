#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"The square pattern is given below"<<endl;
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=n;j++)
        {
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}