// finding peak index of a mountain array using linear search
#include <iostream>
using namespace std;
int peak_mountain(int array[],int size  ){

    int a=array[0];
    for(int i=0; i<size ; i++){
        if(array[i]>a){
            a=array[i];
        }
    }
    return a;
}
int main(){
    int arr[4]={34,2,4,80};
    int peak_value=peak_mountain(arr, 4 );

    cout<<"The highest value or the peak value of the array will be :"<<peak_value<<endl;
    return 0;
}