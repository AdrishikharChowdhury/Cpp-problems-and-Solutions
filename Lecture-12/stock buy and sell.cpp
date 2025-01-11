#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int> &);
int main()
{
    vector<int> prices;
    int mp,n,val;
    cout<<"Enter the size of the prices list: ";
    cin>>n;
    cout<<"Enter the prices of the stocks: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        prices.push_back(val);
    }
    mp=maxProfit(prices);
    cout<<"The maximum profit gained is: "<<mp<<endl;
    return 0;
}
int maxProfit(vector<int>& prices) 
{
    int mp=0,bb=prices[0],n=prices.size();
    for(int i=1;i<n;i++)
    {
        if(prices[i]>bb)
        {
            mp=max(mp,prices[i]-bb);
        }
        bb=min(bb,prices[i]);
    }
    return mp;
}