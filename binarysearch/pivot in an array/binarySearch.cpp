// we have given an array A[5]={6,9,3,4,5}, then find the pivot element using binary search, but we have a constraint that a[start=0]>a[end=size-1] and the function is always increasing

#include<iostream> 
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid =(s+e)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
}

int main() {
    int arr[8]={70,1,2,3,4,5,6,7};
    cout << "Pivot is " << getPivot(arr, 8) << endl;
}

// now come to my method 
// #include <bits/stdc++.h>
// using namespace std;
// int findMin(vector<int> &arr)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     int m = (s + e) / 2;
//     if (arr[s] > arr[e])
//     {
//         while (s < e)
//         {
//             if (arr[m] > arr[0])
//             {
//                 s = m + 1;
//             }
//             else if (arr[m] < arr[0])
//             {
//                 e = m;
//             }
//             else if (arr[m]==arr[0])
//             {
//                 return min(arr[m],arr[m+1]);
//             }
            
//             m = (s + e) / 2;
//         }
//         return arr[m];
//     }
//     else
//     {
//         return arr[0];
//     }
    
// }
// int main()
// {
//     vector<int> arr = {9, 1 ,5,6, 7};
//     int ans = findMin(arr);
//     cout << ans;

//     return 0;
// }