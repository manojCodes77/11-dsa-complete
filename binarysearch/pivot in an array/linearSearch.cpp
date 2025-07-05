// we have given an array A[5]={1,9,3,4,5}, then find the pivot element

#include <iostream>
using namespace std;
int pivot_element(int array[],int size){
    int a;
    bool found=false;
    for(int i=0;i<size; i++){
        if(array[i]>array[i+1]){
            a=array[i+1];
            found=true;
            return a;
        }
    }
    if(!found){
        return -1;
    }
}
int main(){
    int arr[5]={3,9,1,2,2};
    int PivotElement=pivot_element(arr, 5);
    if(PivotElement==-1){
        cout<<"Their is no pivot point in the given array .";
    }
    else{
        cout<<"Pivot element of the given array will be : "<<PivotElement;
    }
    return 0;
}