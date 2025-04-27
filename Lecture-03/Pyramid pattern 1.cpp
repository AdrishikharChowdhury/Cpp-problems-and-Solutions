#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"The pyramid pattern is given below"<<endl;
    for(i=1;i<=n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}