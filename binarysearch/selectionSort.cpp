/*
we have given an example arr[5]={7,1,4,3,9};
sort the above array in ascending order with the help of selection sort


*/ 
#include <iostream>
using namespace std;

int Selection_Sort(int arr[] , int size){
    int minIndex;
    for(int i=0;i<size-1; i++){
        minIndex=i;
        for( int j=i+1; j<size ; j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout<<"the sorted array will be look like this : " <<endl;
    for(int k=0; k<size ; k++){

        cout<<arr[k]<<endl;

    }
    return 0;
}


int main(){
    int arr[5]={7,1,4,3,9};
    Selection_Sort(arr , 5);
    return 0;
}