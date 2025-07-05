// we have given an array arr[]={6,3,0,5}
// sort this array using bubble sort
#include <iostream>
using namespace std;
void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main()
{
    int arr[] = {76,34,65,2,3,4,5,6,7,-54,23,4,0,343,65,876,-12,55};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    return 0;
}