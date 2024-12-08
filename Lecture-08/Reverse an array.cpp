#include<iostream>
using namespace std;
void reverseArray(int [],int);
void displayArr(int [],int);
int main()
{
    int i,arr[6];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before reversing the elements"<<endl;
    displayArr(arr,6);
    reverseArray(arr,6);
    cout<<"After reversing the elements"<<endl;
    displayArr(arr,6);
    return 0;
}
void reverseArray(int arr[],int n)
{
    int i,t;
    for(i=0;i<n/2;i++)
    {
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
}
void displayArr(int arr[],int n)
{
    int i;
    cout<<"The elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}