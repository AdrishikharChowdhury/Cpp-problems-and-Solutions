#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& height);
int main()
{
    vector<int> heights;
    int mp,n,val;
    cout<<"Enter the size of the heights list: ";
    cin>>n;
    cout<<"Enter the heights: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        heights.push_back(val);
    }
    mp=maxArea(heights);
    cout<<"The counter can store "<<mp<<" amount of water"<<endl;
    return 0;
}
int maxArea(vector<int>& heights)
{
    int height,width,i,n=heights.size(),j,mw=0,area;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            width=j-i;
            height=min(heights[i],heights[j]);
            area=width*height;
            mw=max(mw,area);
        }
    }
    return mw;
}