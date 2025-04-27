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
    int i,j,prod,n=nums.size();
    vector<int> ans(n);
    for(i=0;i<n;i++)
    {
        prod=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
                prod*=nums[j];
        }
        ans[i]=prod;
    }
    return ans;
}