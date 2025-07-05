// rohit bhai ka code of merge sort
#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int start, int mid, int end)
{
    vector<int> v(end - start + 1);

    int left = start;
    int right = mid + 1;
    int index = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            v[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            v[index] = arr[right];
            index++;
            right++;
        }
    }

    while (left <= mid)
    {
        v[index] = arr[left];
        index++;
        left++;
    }

    while (right <= end)
    {
        v[index] = arr[right];
        index++;
        right++;
    }

    index = 0;
    while (start <= end)
    {
        arr[start] = v[index];
        start++;
        index++;
    }
}

void mergesort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);  // Dynamically determine the size of the array
    mergesort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
