// #include <iostream>
// using namespace std;
// int jaishreeram(int arr[],int size,int key){
//     int start =0;
//     int end=size-1;

//     int mid=(start+end)/2;
//     while(start<=end){
//         if (arr[mid]==key){
//             return mid;
//         }
//         if (arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=(start+end)/2;

//     }
//     return -1;
// }
// int main(){

//     int even[6]={2,6,24,72,96,50};
//     int odd[5]={1,23,65,75,87};

//     int index=jaishreeram(even,6,50);

//     cout<<"index of 50 is"<<index<<endl;

//     return 0;
// }



#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 18);

    cout << " Index of 18 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}

