// search the target element in the rotated sorted array
// and return the index value , if the element doesnot found return -1
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] < arr[start])
        {
            if (target <= arr[end] && target >= arr[mid])
            {
                start = mid;
                end = end;
                while (start <= end)
                {
                    if (arr[mid ]== target)
                    {
                        return mid;
                    }
                    else if (arr[mid] < target)
                    {
                        start = mid + 1;
                    }
                    else if (arr[mid] > target)
                    {
                        end = mid - 1;
                    }
                    mid = (start + end) / 2;
                }
            }
            else
            {
                start = start;
                end = mid - 1;
            }
        }
        else if (arr[mid] >= arr[start])
        {
            if (target <= arr[mid] && target >= arr[start])
            {
                start = start;
                end = mid;
                while (start <= end)
                {
                    if (arr[mid] == target)
                    {
                        return mid;
                    }
                    else if (arr[mid] < target)
                    {
                        start = mid + 1;
                    }
                    else if (arr[mid] > target)
                    {
                        end = mid - 1;
                    }
                    mid = (start + end) / 2;
                }
            }
            else
            {
                start = mid + 1;
                end = end;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int ans = search(arr, 0);
    cout<<ans;
    return 0;
}

// anothe r more convinient approach will be look like this

// #include <bits/stdc++.h>
// using namespace std;

// int search(vector<int>& arr, int n, int k) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         //if mid points the target
//         if (arr[mid] == k) return mid;

//         //if left part is sorted:
//         if (arr[low] <= arr[mid]) {
//             if (arr[low] <= k && k <= arr[mid]) {
//                 //element exists:
//                 high = mid - 1;
//             }
//             else {
//                 //element does not exist:
//                 low = mid + 1;
//             }
//         }
//         else { //if right part is sorted:
//             if (arr[mid] <= k && k <= arr[high]) {
//                 //element exists:
//                 low = mid + 1;
//             }
//             else {
//                 //element does not exist:
//                 high = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
//     int n = 9, k = 1;
//     int ans = search(arr, n, k);
//     if (ans == -1)
//         cout << "Target is not present.\n";
//     else
//         cout << "The index is: " << ans << "\n";
//     return 0;
// }