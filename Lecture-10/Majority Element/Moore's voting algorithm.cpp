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
    int freq=0,ans=0,i,n=nums.size();
    for(i=0;i<n;i++)
    {
        if(freq==0)
        {
            ans=nums[i];
        }
        if(ans==nums[i])
        {
            freq+=1;
        }
        else{
            freq-=1;
        }
    }
    int count=0;
    for(int val:nums)
    {
        if(val==ans)
        count+=1;
    }
    if(count>n/2)
        return ans;
    else
        return -1;
}