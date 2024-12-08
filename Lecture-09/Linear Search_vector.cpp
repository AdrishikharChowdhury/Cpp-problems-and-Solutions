#include<iostream>
#include<vector>
using namespace std;
int lin_search(vector <int> &,int);
int main()
{
    int val,i,searchElement,n,position;
    vector<int>data;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>val;
        data.push_back(val);
    }
    cout<<"Enter the value you want to search: ";
    cin>>searchElement;
    position=lin_search(data,searchElement);
    if(position!=-1)
    {
        cout<<"Value found in the array at position: "<<position<<endl;
    }
    else{
        cout<<"Value NOT found in the array"<<endl;
    }
    return 0;
}
int lin_search(vector <int> &data,int searchElement)
{
    int i=0;
    for(int val:data)
    {
        if(val==searchElement)
        {
            return i+1;
        }
        i+=1;
    }
    return -1;
}