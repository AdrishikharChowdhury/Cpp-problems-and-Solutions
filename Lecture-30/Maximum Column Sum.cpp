#include <iostream>
#include <vector>
#include <algorithm>
#include<utility>
using namespace std;
int maxColSum(vector<vector<int>>&,int,int);
int main() {
    vector<vector<int>> matrix;
    int rows,cols,i,j;
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
    int colsum=maxColSum(matrix,rows,cols);
    cout<<"The maximum column sum is "<<colsum<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<"\t";;
        }
        cout<<endl;
    }
    return 0;
}

int maxColSum(vector<vector<int>>& matrix, int rows, int cols) {
    int i, j, colSum, maxcolSum = INT_MIN;
    for (j = 0; j < cols; j++) { // Iterate over columns
        colSum = 0;
        for (i = 0; i < rows; i++) { // Iterate over rows for each column
            colSum += matrix[i][j];
        }
        maxcolSum = max(maxcolSum, colSum);
    }
    return maxcolSum;
}