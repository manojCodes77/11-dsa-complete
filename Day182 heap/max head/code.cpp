// here we are going to implement max heap using array in c++
#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
    int *arr;
    int size;       // current size of the heap
    int total_size; // total size of the heap

public:
    MaxHeap(int n)
    {
        total_size = n;
        size = 0;
        arr = new int[n];
    }

    // insert a new element in the heap
    void insert(int x)
    {
        if (size == total_size)
        {
            cout << "Heap overflow ! " << endl;
            return;
        }
        size++;
        arr[size - 1] = x;
        int i = size - 1;

        // compare the new element with its ancestors
        // also known as set up
        while (i > 0 && arr[(i - 1) / 2] < arr[i])
        {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }

        cout<<"Element inserted successfully"<<endl;
        return;
    }

    // print the heap
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        return;
    }

    // delete the root element of the heap
    void heapify(int i)
    {
        // largest will store the index of the largest element among the root, left child and right child
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right < size && arr[right] > arr[largest])
        {
            largest = right;
        }

        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            heapify(largest);
        }

        return;
    }
    void deleteRoot()
    {
        if (size == 0)
        {
            cout << "Heap underflow ! " << endl;
            return;
        }

        arr[0] = arr[size - 1];
        size--;

        // heapify the heap
        heapify(0);

        cout<<"Root element deleted successfully"<<endl;
        return;
    }
};
int main()
{
    MaxHeap h1(6); // 6 is the total size of the heap
    h1.insert(10);
    h1.insert(20);
    h1.insert(30);
    h1.insert(40);
    h1.insert(50);
    h1.insert(60);
    h1.insert(70);

    h1.print();//here we are doing nothing but level order traversal of the heap

    h1.deleteRoot();

    h1.print();

    return 0;
}