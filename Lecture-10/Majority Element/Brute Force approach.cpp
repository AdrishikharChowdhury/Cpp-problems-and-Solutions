#include<iostream>
#include<vector>
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
    int freq,n=nums.size();
    for(int i:nums)
    {
        freq=0;
        for(int j:nums)
        {
            if(i==j)
            {
                freq+=1;
            }
        }
        if(freq>n/2)
        {
            return i;
        }
    }
    return -1;
}