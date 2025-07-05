// we have given an array="manoj" then return "jonam";
//here '\0' acts as a terminator

#include <iostream>
using namespace std;
int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int reverse(char name[])
{
    int name_length = length(name);
    int x = (name_length) / 2;
    for (int i = 0; i < x; i++)
    {
        swap(name[i], name[name_length - i-1]);
    }
    for (int i = 0; i < name_length; i++)
    {
        cout << name[i];
    }
    return 0;
}

int main()
{
    char name[20] = "manojsinghrawat";
    reverse(name);
    return 0;
}