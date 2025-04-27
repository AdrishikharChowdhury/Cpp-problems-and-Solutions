#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>& nums,int,int,int);
int sumofElements(vector<int>&nums);
int allocateBooks(vector<int>& nums,int n,int m);
int main()
{
    vector<int> nums;
    int n,val,painters;
    int found;
    cout<<"Enter the no. of boards: ";
    cin>>n;
    cout<<"Enter the length of board (in units): "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    cout<<"Enter the number of painters to allocate boards: ";
    cin>>painters;
    found=allocateBooks(nums,nums.size(),painters);
    if(found!=-1)
    {
        cout<<"The minimum number of time required is "<<found<<endl;
    }
    else{
        cout<<"Can't be finished by "<<painters<<"no. of painters"<<endl;
    }
    return 0;
}
int sumofElements(vector<int>& nums)
{
    int sum=0;
    for(int val:nums)
    {
        sum+=val;
    }
    return sum;
}
int allocateBooks(vector<int>& nums,int n,int m)
{
    int mid,st=nums[0],end=sumofElements(nums),ans=-1;
    for(int val:nums)
    {
        st=max(st,val);
    }
    while(st<=end)
    {
        mid=st+(end-st)/2;
        if(isValid(nums,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
bool isValid(vector<int>& nums,int n,int m,int mid)
{
    int i,stu=1,pages=0;
    for(i=0;i<n;i++)
    {
        if(nums[i]>mid)
        {
            return false;
        }
        if(pages+nums[i]<=mid)
        {
            pages+=nums[i];
        }
        else{
            stu+=1;
            pages=nums[i];
        }
    }
    if(stu>m)   
        return false;
    else    
        return true;
}