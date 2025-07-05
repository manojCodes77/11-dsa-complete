// you have given a char array . check that it is a palindorme or not
// concept:- if the reverse of char array is equal to the original array then it will be a palindrome

// method 1 , this method is only valid when capacity of array =size of array
// #include <iostream>
// using namespace std;

// int check_palindrome(char array[], int n){
//     int start=0;
//     int end=n-1;
//     while(start<end){
//         if (array[start]==array[end])
//         {
//             start++;
//             end--;
//         }else{
//             return 0;
//         }
        
//     }
//     return 1;
// }
// int main(){
//     // char arr[]={'a','b','c','b','a'};
//     char name[5];
//     cout<<"length of the string is 5 ."<<endl;
//     cout<<"enter the string : "<<endl;
//     cin>>name;

//     bool cp=check_palindrome(name, 5);
//     if(cp){
//         cout<<"it is a palindrome ."<<endl;
//     }else{
//         cout<<"no , it is not a palindrome ."<<endl;
//     }
//     return 0;
// }



//method -2 this method is always valid but it has more space complexity
#include <iostream>
#include<string>
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
string reverse(char name[])
{
    int name_length = length(name);
    int x = (name_length) / 2;
    for (int i = 0; i < x; i++)
    {
        swap(name[i], name[name_length - i-1]);
    }

    string myReverseString="";
    for (int i = 0; i < name_length; i++)
    {
       myReverseString.push_back(name[i]);
    }

    return myReverseString;
}

bool check_palindrome(char name[]){
    string myString="";
    int name_length = length(name);
    for (int i = 0; i < name_length; i++)
    {
       myString.push_back(name[i]);
    }

    string myReverseString=reverse(name);
    if(myReverseString==myString){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char name[10];
    cout<<"You cannot enter the name having more then 10 characters. "<<endl;
    cout<<"enter the name : "<<endl;
    cin>>name;

    bool check=check_palindrome(name);
    if (check)
    {
        cout<<"the string is a palindrome: ";
    }else{
        cout<<"the string is not a palindrome.";
    }
    
    return 0;
} 
