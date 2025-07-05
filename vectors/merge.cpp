// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = m; i < nums1.size(); i++)
    {
        nums1[i] = nums2[i - m];
    }
    sort(nums1.begin(), nums1.end());
}
int main()
{
    vector<int> num1 = {1, 2, 3, 4, 5, 0, 0, 0};
    vector<int> num2 = {32, 9, 8};
    merge(num1, 5, num2, 3);
    for (int i : num1)
    {
        cout << i << " ";
    }

    return 0;
}
