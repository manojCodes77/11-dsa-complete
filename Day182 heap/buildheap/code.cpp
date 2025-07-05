// here we are going to implement the build heap function with most optimised approach
// time complexity of this approach is O(n)
#include <bits/stdc++.h>
using namespace std;

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
int main(){
    int arr[]={10,3,5,6,2,4,9};
    BuildMaxHeap(arr,7);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
