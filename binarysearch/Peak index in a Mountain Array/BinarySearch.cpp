
/*
finding peak index of a mountain array using binary search
arr is guaranteed to be a mountain array.*/ 
#include <iostream>
using namespace std;
int peak_mountain(int array[], int size){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end){
        if(array[mid]>array[mid+1]){
            end=mid;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2 ;

    }
    return mid;
}
int main(){
    int arr[5]={2,3,3,41,1};
    int peak_index=peak_mountain(arr, 5);
    cout<<"the index of the peak value will be : "<<peak_index<<endl;
    return 0;
}
/*
finding peak index of a mountain array using binary search
arr is guaranteed to be a mountain array.*/ 

// #include <iostream>
// using namespace std;
// int peak_mountain(int array[] , int size){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2 ;
//     int ans;
//     while (start<=end)
//     {
//         if (array[mid]>array[mid+1])
//         {
//             ans=mid;
//             end=mid-1;

//         }
//         else if (array[mid]<array[mid +1])
//         {
//             ans=mid;
//             start=mid+1;

//         }
        
        
//     }
//     return ans;
    
// }
// int main(){
//     int arr[4]={3,4,5,1};
//     int peak_value_index=peak_mountain(arr , 4);
//     cout<<"the index of the peak value will be : "<<peak_value_index<<endl;
//     return 0;
// }