#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>>&,int);
bool searchInRow(vector<vector<int>>&, int,int);

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
        cout<<"Ther was no "<<target<<" element in this matrix";
    }
}

bool searchInRow(vector<vector<int>>& matrix, int target,int midRow){
    int cols=matrix[0].size();
    int startCol=0,midCol,endCol=cols-1,startRow=0;
    while(startCol<=endCol){
        midCol=startCol+((endCol-startCol)/2);
        if(matrix[midRow][midCol]<target){
            startCol=midCol+1;
        }
        else if(matrix[midRow][midCol]>target){
            endCol=midCol-1;
        }
        else{
            return true;
        }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),cols=matrix[0].size();
        int startCol=0,midCol,endCol=cols-1,startRow=0,endRow=rows-1,midRow;
        while (startRow<=endRow)
        {
            midRow=startRow+((endRow-startRow)/2);
            if(matrix[midRow][0] <= target && target <= matrix[midRow][cols-1]) {
                return searchInRow(matrix, target, midRow);
            }
            else if(target < matrix[midRow][0]) {
                endRow = midRow - 1;
            }
            else {
                startRow = midRow + 1;
            }
        }
        return false;
    }