#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a Letter: ";
    cin>>c;
    int C=c;
    if(C>=65 && C<=90){
        cout<<c<<" is an uppercase letter"<<endl;
    }
    else if(C>=97 && C<=122)
    {
        cout<<c<<" is a lowercase letter"<<endl;
    }
    else{
        cout<<"The entered character is not a letter"<<endl;
    }
    return 0;
}