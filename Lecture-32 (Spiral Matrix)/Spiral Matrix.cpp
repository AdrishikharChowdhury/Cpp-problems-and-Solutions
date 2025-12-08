#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

vector <int> spiralMatrix(vector<vector<int>> &);

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

    vector<int> spiraledMatrix=spiralMatrix(matrix);

    cout<<"The 2D matrix is:"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"The spiraled matrix is: ";
    
    for(int val: spiraledMatrix){
        cout<<val<<" ";
    }

    return 0;
}

vector <int> spiralMatrix(vector<vector<int>> &matrix){
    int srows=0,scols=0;
    int erows=matrix.size()-1,ecols=matrix[0].size()-1;
    vector <int> ans;
    while(srows<=erows && scols<=ecols){
        //Top
        for(int i=scols;i<=ecols;i++){
            ans.push_back(matrix[srows][i]);
        }
        //Right
        for(int i=srows+1;i<=erows;i++){
            ans.push_back(matrix[i][ecols]);
        }
        //Bottom
        for(int i=ecols-1;i>=scols;i--){
            if(srows==erows){
                break;
            }
            ans.push_back(matrix[erows][i]);
        }
        //Left
        for(int i=erows-1;i>=srows+1;i--){
            if(scols==ecols){
                break;
            }
            ans.push_back(matrix[i][scols]);
        }
        srows+=1; scols+=1;
        erows-=1; ecols-=1;
    }
    return ans;
}