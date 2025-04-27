#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int> &);
void display(vector<int> &);
int main()
{
    vector<int> nums;
    int i,n,val;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Fill the array with 0s,1s and 2s:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    cout<<"The array before sorting is..."<<endl;
    display(nums);
    sortColors(nums);
    cout<<"The array after sorting is....."<<endl;
    display(nums);
    return 0;
}
void sortColors(vector<int> &nums)
{
    int mid=0,high=nums.size()-1,low=0;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            low+=1;
            mid+=1;
        }
        else if(nums[mid]==1)
        {
            mid+=1;
        }
        else{
            swap(nums[high],nums[mid]);
            high-=1;
        }
    }
}
void display(vector<int> &nums)
{
    for(int val:nums)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}