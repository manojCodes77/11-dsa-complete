// In C++, the range-based for loop, also known as the "for each" loop, provides a concise way to iterate over elements in a range, such as an array, a container, or any sequence of elements.
#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // Using range-based for loop to iterate over elements in the array
    for (int element : arr) {
        std::cout << element << " ";
    }

    return 0;
}
