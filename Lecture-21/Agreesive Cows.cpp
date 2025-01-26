#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValid(vector<int>& nums,int,int,int);
int sumofElements(vector<int>&nums);
int allocateBooks(vector<int>& nums,int n,int m);
int main()
{
    vector<int> nums;
    int n,val,painters;
    int found;
    cout<<"Enter the no. of distances: ";
    cin>>n;
    cout<<"Enter the distances (in units): "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    cout<<"Enter the number of cows: ";
    cin>>painters;
    found=allocateBooks(nums,nums.size(),painters);
    if(found!=-1)
    {
        cout<<"The distance required is "<<found<<endl;
    }
    else{
        cout<<"Can't be placed"<<endl;
    }
    return 0;
}
int allocateBooks(vector<int>& nums,int n,int m)
{
    sort(nums.begin(),nums.end());
    int mid,st=1,ans=-1;
    int end=nums[n-1]-nums[0];
    while(st<=end)
    {
        mid=st+(end-st)/2;
        if(isValid(nums,n,m,mid))
        {
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
bool isValid(vector<int>& nums,int n,int m,int mid)
{
    int i,cows=1,laststallPos=nums[0];
    for(i=1;i<n;i++)
    {
        if(nums[i]-laststallPos>=mid)
        {
            cows+=1;
            laststallPos=nums[i];
        }
        if(cows==m)
        {
            return true;
        }
    }   
    return false;
}