#include<iostream>
#include<vector>
using namespace std;
int singleNonDuplicate(vector<int>& nums);
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
    found=singleNonDuplicate(nums);
    if(found!=-1)
    {
        cout<<"The single element is "<<found<<endl;
    }
    else{
        cout<<"Single element not found"<<endl;
    }
    return 0;
}
int singleNonDuplicate(vector<int>& nums) {
    int mid,st=0,end=nums.size()-1,n=nums.size();
    if(n==1)
    return nums[0];
    while(st<=end)
    {
        mid=st+(end-st)/2;
        if(mid==0 && nums[0]!=nums[1])
            return nums[mid];
        if(mid==n-1 && nums[n-1]!=nums[n-2])
            return nums[mid];
        if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1])
        {
            return nums[mid];
        }
        if(mid%2==0)
        {
            if(nums[mid-1]==nums[mid])
            {
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        else
        {
            if(nums[mid-1]==nums[mid])
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}