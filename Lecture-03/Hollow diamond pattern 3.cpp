#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"The hollow diamond pattern is given below"<<endl;
    for(i=1;i<=n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(j=3;j<=2*i-1;j++)
        {
            cout<<" ";
        }
        if(i>1)
            cout<<"*";
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        for (k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(j=3;j<=2*i-1;j++)
        {
            cout<<" ";
        }
        if(i>1)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}