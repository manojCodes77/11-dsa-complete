// method 1 to find the length of an array

// #include <iostream>
// #include <typeinfo>
// using namespace std;
// int main(){
//     int array[5]={1,2,3,4,5};
//     cout<<sizeof(array)<<endl;
//     int a= sizeof(array);
//     cout<< typeid(a).name()<<endl;

//     int array_length=sizeof(array)/sizeof(int);
//     cout<<"hence thelength of an array will be "<<array_length;

//     return 0;
// }

// method 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {11, 22, 33, 44};

//     cout << "The Length of the Array is : " << end(arr) - begin(arr);// length

//     return 0;
// }

// method 3 using stl
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr{1, 2, 3, 4, 5};
    cout << "\nThe length of the given Array is: " << arr.size();
    return 0;
}