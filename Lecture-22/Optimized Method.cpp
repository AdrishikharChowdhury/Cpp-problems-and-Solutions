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
    int count0=0,count1=0,count2=0;
    for(int val:nums)
    {
        if(val==0)
        {
            count0+=1;
        }
        else if(val==1)
        {
            count1+=1;
        }
        else{
            count2+=1;
        }
    }
    int idx=0;
    for(int i=0;i<count0;i++)
    {
        nums[idx++]=0;
    }
    for(int i=0;i<count1;i++)
    {
        nums[idx++]=1;
    }
    for(int i=0;i<count2;i++)
    {
        nums[idx++]=2;
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