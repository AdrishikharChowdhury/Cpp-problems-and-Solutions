#include<iostream>
using namespace std;
void createArrays(int [],int);
void intersectionOfTwoarrays(int [],int [],int,int);
int main()
{
    int *arr2,*arr1,n1,n2;
    cout<<"Enter the size of the 1st array: ";
    cin>>n1;
    cout<<"Enter the size of the 2nd array: ";
    cin>>n2;
    arr1=new int[n1];
    createArrays(arr1,n1);
    arr2=new int[n2];
    createArrays(arr2,n2);
    intersectionOfTwoarrays(arr1,arr2,n1,n2);
    delete[] arr1;
    delete[] arr2;
    return 0;
}
void createArrays(int arr[],int n)
{
    int i;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
}
void intersectionOfTwoarrays(int arr1[],int arr2[],int size1,int size2)
{
    int i,j;
    bool isUnique=true;
    cout<<"The unique values are:"<<endl;
    for(i=0;i<size1;i++)
    {
        isUnique = false;
        for (j = 0; j < size2; j++) 
        {
            if (arr1[i]==arr2[j]) 
            {
                isUnique = true;
                break;
            }
        }
        if (isUnique) 
        {
            cout << arr1[i] << "\t";
        }
    }
}