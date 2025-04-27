#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
void display(const vector<int> &);

int main()
{
    vector<int> nums1, nums2;
    int i, n1, n2, val;

    cout << "Enter the size of the 1st array (without extra spaces for merging): ";
    cin >> n1;
    cout << "Enter the 1st array elements (sorted):" << endl;
    for(i = 0; i < n1; i++)
    {
        cin >> val;
        nums1.push_back(val);
    }

    cout << "Enter the size of the 2nd array: ";
    cin >> n2;
    cout << "Enter the 2nd array elements (sorted):" << endl;
    for(i = 0; i < n2; i++)
    {
        cin >> val;
        nums2.push_back(val);
    }

    // Expand nums1 to accommodate nums2
    nums1.resize(n1 + n2, 0);

    cout << "After merging the elements are:" << endl;
    merge(nums1, n1, nums2, n2);
    display(nums1);
    
    return 0;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[idx--] = nums1[i--];
        }
        else
        {
            nums1[idx--] = nums2[j--];
        }
    }

    while (j >= 0)
    {
        nums1[idx--] = nums2[j--];
    }
}

void display(const vector<int> &nums)
{
    for(int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;
}
