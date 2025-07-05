#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pos=low;
    for(int i=low;i<=high;i++){
        if(arr[i]<=arr[high]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(int arr[], int low, int high) {
    // base case
    if (low >= high) {
        return;
    }

    int pivot=partition(arr, low, high);
    // left side of pivot
    quickSort(arr, low, pivot - 1);

    // right side of pivot
    quickSort(arr, pivot + 1, high);

}

int main(){
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    quickSort(arr, 0, 7);
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
