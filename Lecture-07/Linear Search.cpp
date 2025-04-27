#include<iostream>
using namespace std;
int linearSearch(int [],int,int);
int main()
{
    int i,arr[6],searchElement;
    cout<<"Enter the numbers in the array:"<<endl;
    for(i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you have to search: ";
    cin>>searchElement;
    int found=linearSearch(arr,6,searchElement);
    if(found!=-1)
    {
        cout<<"Element has been found at position "<<found<<endl;
    }
    else
    {
        cout<<"Element has NOT been found"<<endl;
    }
    return 0;
}
int linearSearch(int arr[],int n,int searchElement)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==searchElement)
        {
            return i+1;
        }
    }
    return -1;
}
