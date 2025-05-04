#include <iostream>
#include <vector>
#include <algorithm>
#include<utility>
using namespace std;
pair<int,int> linearSearch(vector<vector<int>>&,int,int,int);

int main() {
    vector<vector<int>> matrix;
    int rows,cols,i,j,key;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    cout<<"Enter the no. of columns: ";
    cin>>cols;
    matrix.resize(rows, vector<int>(cols));
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<"Enter the matrix["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];
        }
    }
    cout<<"Enter the data to find: ";
    cin>>key;
    pair<int,int> index=linearSearch(matrix,rows,cols,key);
    if (index.first!=-1 && index.second!=-1)
    {
        cout<<"The co-ordinates of the "<<key<<" is "<<index.first<<","<<index.second<<endl;
    }
    else{
        cout<<key<<" not found in the matrix"<<endl;
    }
    return 0;
}

pair<int,int> linearSearch(vector<vector<int>>&matrix,int rows,int cols,int key)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(key==matrix[i][j])
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}