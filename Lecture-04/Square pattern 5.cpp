#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch='A';
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"The square pattern is given below"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<ch<<"\t";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}