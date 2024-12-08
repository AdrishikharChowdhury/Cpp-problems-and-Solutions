#include<iostream>
using namespace std;
void displayArray(int [],int);
void swapMinMax(int [],int);
int main()
{
    int n,i,*arr;
    cout<<"Enter the size of the array: ";
    cin>>n;
    arr=new int[n];
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before swapping:"<<endl;
    displayArray(arr,n);
    swapMinMax(arr,n);
    cout<<"After swapping:"<<endl;
    displayArray(arr,n);
    delete[] arr;
    return 0;
}
void displayArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void swapMinMax(int arr[],int n)
{
    int i,minIdx=0,maxIdx=0,t;
    int max=arr[0],min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {    
            minIdx=i;
            min=arr[i];
        }
        else if(max<arr[i])    
        {    
            maxIdx=i;
            max=arr[i];
        }
    }
    t=arr[minIdx];
    arr[minIdx]=arr[maxIdx];
    arr[maxIdx]=t;
}