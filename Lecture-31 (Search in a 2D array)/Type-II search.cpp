#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>>&,int);

int main(){
    vector<vector<int>> matrix;
    int i,j,rows,cols,target;
    cout<<"Enter the rows of the matrix: ";
    cin>>rows;
    cout<<"Enter the columns of the matrix: ";
    cin>>cols;
    matrix.resize(rows,vector<int>(cols));
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<"Enter the value for matrix["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];
        }
    }

    cout<<"Enter the element you want to find: ";
    cin>>target;

    bool check=searchMatrix(matrix,target);

    cout<<"The matrix is:"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    if(check){
        cout<<"Element was found"<<endl;
    }
    else{
        cout<<"There was no "<<target<<" element in this matrix";
    }
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows=0,cols=matrix[0].size()-1;
    while(rows < matrix.size() && cols >= 0){
        if(target==matrix[rows][cols]){
            cout<<"The element was at row: "<<rows+1<<" and column: "<<cols+1<<endl;
            return true;
        }
        else if(target<matrix[rows][cols]){
            cols-=1;
        }
        else{
            rows+=1;
        }
    }
    return false;
}