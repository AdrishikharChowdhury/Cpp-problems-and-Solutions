#include<iostream>
using namespace std;
int main()
{
    int i,arr[6],minIdx=0,maxIdx=0;
    cout<<"Enter the numbers in the array:"<<endl;
    for(i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    int min=arr[0],max=arr[0];
    for(i=0;i<6;i++)
    {
        if(min>arr[i])
        {    
            min=arr[i];
            minIdx=i;
        }
        else if(max<arr[i])    
        {    
            max=arr[i];
            maxIdx=i;
        }
    }
    cout<<"Maximum Element: "<<max<<" at index: "<<maxIdx<<endl;
    cout<<"Minimum Element: "<<min<<" at index: "<<minIdx<<endl;
    return 0;
}
