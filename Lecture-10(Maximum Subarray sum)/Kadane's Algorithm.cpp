#include<iostream>
#include<vector>
using namespace std;
int maxSumofSubarray(vector<int> &);
int main()
{
    vector<int> nums;
    int i,val,n,maxSum;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    maxSum=maxSumofSubarray(nums);
    cout<<"The maximum sum of the sub array is: "<<maxSum<<endl;
    return 0;
}
int maxSumofSubarray(vector<int>& nums)
{
    int i,size=nums.size(),currentSum,maxSum=INT_MIN;
    for(i=0;i<size;i++)
    {
        currentSum+=nums[i];
        maxSum=max(maxSum,currentSum);
        if(currentSum<0)
        {
            currentSum=0;
        }
    }
    return maxSum;
}