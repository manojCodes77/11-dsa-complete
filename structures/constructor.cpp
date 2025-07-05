#include <bits/stdc++.h>
using namespace std;

struct Person {
    char name[50];
    int age;

    // Default constructor
    Person() {
        strcpy(name, "John Doe"); // Default name
        age = 0; // Default age
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Person(const char* n, int a) {
        strcpy(name, n);
        age = a;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Person(const Person& p) {
        strcpy(name, p.name);
        age = p.age;
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    // Using default constructor
    Person p1;
    cout << "Name: " << p1.name << ", Age: " << p1.age << endl;

    // Using parameterized constructor
    Person p2("Alice", 30);
    cout << "Name: " << p2.name << ", Age: " << p2.age << endl;

    // Using copy constructor
    Person p3(p2);
    cout << "Name: " << p3.name << ", Age: " << p3.age << endl;

    return 0;
}
