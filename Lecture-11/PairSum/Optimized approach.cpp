#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &,int);
int main()
{
    vector<int> nums;
    int i,val,n,target;
    vector<int> pairSum;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    cout<<"Enter the target: ";
    cin>>target;
    pairSum=twoSum(nums,target);
    cout<<"1st index: "<<pairSum[0]<<endl<<"2nd index: "<<pairSum[1]<<endl;
    return 0;
}
vector<int> twoSum(vector<int>& nums,int target)
{
    int i=0,size=nums.size(),pairs,j=size-1;
    vector<int> pairSum;
    while(i<j)
    {
        pairs=nums[i]+nums[j];
        if(pairs>target)
        {
            j--;
        }
        else if(pairs<target)
        {
            i++;
        }
        else{
            pairSum.push_back(i);
            pairSum.push_back(j);
            return pairSum;        
        }
    }
    return pairSum;
}