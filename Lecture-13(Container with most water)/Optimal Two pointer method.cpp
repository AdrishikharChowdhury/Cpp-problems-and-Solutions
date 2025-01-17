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
    int width,height,lp=0,rp=heights.size()-1,mw=0,area=0;
    while(lp<rp)
    {
        width=rp-lp;
        height=min(heights[lp],heights[rp]);
        area=width*height;
        mw=max(mw,area);
        heights[lp]<heights[rp]?lp+=1:rp-=1;
    }
    return mw;
}