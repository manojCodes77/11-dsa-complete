#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using range-based for loop to iterate over elements in the vector
    for (int element : vec) {
        std::cout << element << " ";
    }

    return 0;
}
