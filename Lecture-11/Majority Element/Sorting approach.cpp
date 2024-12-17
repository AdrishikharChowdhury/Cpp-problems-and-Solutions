#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int> &);
int main()
{
    vector<int> nums;
    int i,val,n,majors;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    majors=majorityElement(nums);
    cout<<"The majority element is: "<<majors<<endl;
    return 0;
}
int majorityElement(vector<int>& nums)
{
    int i,freq=1,n=nums.size(),ans=nums[0];
    sort(nums.begin(),nums.end());
    for(i=1;i<n;i++)
    {
        if(nums[i]==nums[i-1])
        {
            freq+=1;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2)
        {
            return ans;
        }
    }
    return -1;
}