// given that we have an array 1 2 3 3 5
// and we have a key 3 
// find the first occurance index and last occurance index
#include <iostream>
using namespace std;
int firstoccur(int array[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2 ;
    int ans=-1;
    while (start<=end)
    {
        if (key==array[mid]){
            ans=mid;
            end=mid-1;

    }else if(array[mid]>key){
            end=mid-1;

    }else{
        start=mid+1;
    }mid=(start+end)/2;

    }return ans;
    
}
int lastoccur(int array[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2 ;
    int ans=-1;
    while (start<=end)
    {
        if (key==array[mid]){
            ans=mid;
            start=mid+1;

    }else if(array[mid]>key){
            end=mid-1;

    }else{
        start=mid+1;
    }mid=(start+end)/2;

    }return ans;
    
}
int main(){
    int array[]={1,2,3,3,5};
    int answer1=firstoccur(array,5,3);
    cout<<"first occurance of 3 is at the index : "<<answer1<<endl;
    int answer2=lastoccur(array,5,3);
    cout<<"last occurance of3 is at the index : "<<answer2<<endl;
    int total=answer2-answer1 +1;
    cout<<"total number of occurances are:"<<total<<endl;
    return 0;
}