#include<iostream>
using namespace std;
int arraySum(int [],int);
int arrayProduct(int [],int);
int main()
{
    int sum,product,i,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<<n<<" elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sum=arraySum(arr,n);
    product=arrayProduct(arr,n);
    cout<<"Sum of the elements: "<<sum<<endl;
    cout<<"Product of the elements: "<<product<<endl;
    delete[] arr;
    return 0;
}
int arraySum(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int arrayProduct(int a[],int n)
{
    int i,product=1;
    for(i=0;i<n;i++)
    {
        product*=a[i];
    }
    return product;
}