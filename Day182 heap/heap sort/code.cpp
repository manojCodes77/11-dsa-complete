// here we are using max heap to sort the array in ascending order
// we are going to use the heap sort algorithm to sort the array
// time complexity of this approach is O(nlogn)
#include <bits/stdc++.h>
using namespace std;

// convert the array into max heap
// time complexity of this function is O(n)
void Heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        Heapify(arr,n,largest);
    }
    return ;
}
void BuildMaxHeap(int arr[],int n){
    // step down from the last non leaf node to the root node
    for(int i=n/2 -1;i>=0;i--){
        Heapify(arr,n,i);
    }

    return;
}

// now we are going to sort the array using heap sort
void sortArray(int arr[],int n){
    // now we are going to sort the array
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        // time complexity of heapify function is O(logn)
        Heapify(arr,i,0);
    }
    return;
}

// print the array
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int arr[]={10,3,5,6,2,4,9};
    int n=7;
    cout<<"The original array is: ";
    printArray(arr,n);
    cout<<endl;
    BuildMaxHeap(arr,n);
    // now we are going to sort the array
    sortArray(arr,n);

    cout<<"The sorted array is: ";
    printArray(arr,n);
    return 0;
}
