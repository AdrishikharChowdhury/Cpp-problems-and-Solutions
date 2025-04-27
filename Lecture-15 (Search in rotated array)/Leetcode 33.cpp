#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums,int);
int main()
{
    vector<int> nums;
    int n,val,k;
    int found;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    cout<<"Enter the value you want to search: ";
    cin>>k;
    found=search(nums,k);
    if(found!=-1)
    {
        cout<<"Element found at pos "<<found+1<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
int search(vector<int>& nums, int target) {
    int mid,st=0,end=nums.size()-1;
    while(st<=end)
    {
        mid=st+(end-st)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[st]<=nums[mid])
        {
            if(nums[st]<=target && target<=nums[mid])
            {
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(nums[mid]<=target && target<=nums[end])
            {
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}