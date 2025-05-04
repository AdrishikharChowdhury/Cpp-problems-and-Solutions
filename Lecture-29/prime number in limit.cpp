#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countPrimes(int);
int main() {
    int n,count;
    cout<<"Enter the limit you want to find the prime numbers: ";
    cin>>n;
    count=countPrimes(n);
    cout << "The number of prime numbers from 2 to " << n << " is " << count << endl;
    return 0;
}

int countPrimes(int n) {
    vector<bool> isPrime(n+1,true);
    int i,j,count=0;
    for(i=2;i<n;i++)
    {
        if(isPrime[i])
        {
            count+=1;
            for(j=i*2;j<n;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    return count;
}