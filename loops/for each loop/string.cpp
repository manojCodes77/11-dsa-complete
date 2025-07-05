#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";

    // Using range-based for loop to iterate over characters in the string
    for (char ch : str) {
        std::cout << ch << " ";
    }

    return 0;
}
