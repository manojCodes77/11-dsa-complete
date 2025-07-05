#include <iostream>
using namespace std;
int jaishreeram(int array[], int size, int key){

    int start=0;
    int end=size-1;

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
    int even[]={2,34,5,6,7,8};
    int odd[]={3,8,12,13,15};

    int index=jaishreeram(even,6,34);
    cout<<"index of 34 is"<<index<<endl;

    return 0;
}