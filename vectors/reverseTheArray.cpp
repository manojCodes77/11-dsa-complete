// Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

// Example:

// We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
// based indexing so the subarray {5, 6} will be reversed and our 
// output array will be {1, 2, 3, 4, 6, 5}
#include <iostream>
#include<vector>
using namespace std;
void reverseArray(vector <int > arr, int m){
    int start=m+1;
    int end=arr.size() -1;
    while (start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
} 
int main(){
    vector <int > arr={34,65,78,12,54,97,-2,-54,0};
    reverseArray(arr, 3);

    return 0;
}