#include <iostream>
using namespace std;
int binary_search(int array[],int size, int key){
    int start=0;
    int end=size -1 ;
    int mid=(start+end)/2 ;
    while(start<=end){
        if(array[mid]==key){
            return mid;
        }
        if (key>array[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int value=binary_search(arr, 5, 9);
    if (value == -1){
        cout<<"the key value doesnot found in the array .";

    }
    else{
        cout<<"the key value has found at the index of "<<value;
    }

    return 0;
}