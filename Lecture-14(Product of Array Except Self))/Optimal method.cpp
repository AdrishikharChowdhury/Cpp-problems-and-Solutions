#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums);
int main()
{
    vector<int> ans,nums;
    int n,val;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    ans=productExceptSelf(nums);
    cout<<"The array after multiplication is: ";
    for(int mp : ans)
    {
        cout<<mp<<" ";
    }
    return 0;
}
vector<int> productExceptSelf(vector<int>& nums)
{
    int i,suffix=1,n=nums.size();
    vector<int> ans(n,1);
    for(i=1;i<n;i++)
    {
        ans[i]=ans[i-1]*nums[i-1];
    }
    for(i=n-2;i>=0;i--)
    {
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
    return ans;
}