#include<iostream>
using namespace std;

int main() {
    int i, j,k, n;
    char ch='A';
    cout << "Enter the no. of rows: ";
    cin >> n;
    cout << "The inverted triangle pattern is given below:" << endl;

    for(i = 1; i <= n; i++) 
    {
        for(k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(j = 1; j <= n-i; j++) 
        {
            cout <<ch;
        }
        ch+=1;
        cout << endl;
    }
    return 0;
}