#include<iostream>
using namespace std;
void printUniqueValues(int [],int );
int main()
{
    int *arr,i,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    arr=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printUniqueValues(arr,n);
    delete[] arr;
    return 0;
}
void printUniqueValues(int arr[],int n)
{
    int i,j;
    bool isUnique=true;
    cout<<"The unique values are:"<<endl;
    for(i=0;i<n;i++)
    {
        isUnique = true;
        for (j = 0; j < n; j++) 
        {
            if (i != j && arr[i] == arr[j]) 
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique) 
        {
            cout << arr[i] << "\t";
        }
    }
}