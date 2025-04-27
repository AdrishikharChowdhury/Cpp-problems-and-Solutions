#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"The triangle pattern is given below"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}