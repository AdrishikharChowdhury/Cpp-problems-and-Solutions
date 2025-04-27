#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr);
int main()
{
    vector<int> nums;
    int n,val;
    int found;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    found=peakIndexInMountainArray(nums);
    if(found!=-1)
    {
        cout<<"The peak element is at pos "<<found+1<<endl;
    }
    else{
        cout<<"Peak element not found"<<endl;
    }
    return 0;
}
int peakIndexInMountainArray(vector<int>& arr) 
{
    int mid,st=1,end=arr.size()-2;
    while(st<=end)
    {
        mid=st+(end-st)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        {
            return mid;
        }
        else if(arr[mid-1]<arr[mid])
        {
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}