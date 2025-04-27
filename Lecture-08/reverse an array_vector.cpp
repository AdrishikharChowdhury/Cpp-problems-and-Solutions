#include<iostream>
#include<vector>
using namespace std;
void reverse(vector <int> &);
int main()
{
    int val,i,n;
    vector<int>data;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>val;
        data.push_back(val);
    }
    reverse(data);
    cout<<"The reversed elements are:"<<endl;
    for(int val:data)
    {
        cout<<val<<"\t";
    }
    return 0;
}
void reverse(vector <int> &data)
{
    int size=data.size(),temp,i;
    for(i=0;i<size/2;i++)
    {
        temp=data[i];
        data[i]=data[size-i-1];
        data[size-i-1]=temp;
    }
}