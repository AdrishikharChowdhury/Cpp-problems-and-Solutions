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
        for(j=1;j<i;j++)
        {
            cout<<"*";
        }
        for(k=2*(n-i);k>0;k--)
        {
            cout<<" ";
        }
        for (int j = i; j > 1; j--) 
        {
            cout <<"*";
        }
        cout<<endl;
    }
    for(i=n-1;i>1;i--)
    {
        for(j=1;j<i;j++)
        {
            cout<<"*";
        }
        for(k=2*(n-i);k>0;k--)
        {
            cout<<" ";
        }
        for (int j = i; j > 1; j--) 
        {
            cout <<"*";
        }
        cout<<endl;
    }
    return 0;
}