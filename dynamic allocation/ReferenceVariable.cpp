// reference variable is that variable which points the same memory allocation with a different name
#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int &j = i;
    cout << j << endl;
    j++;
    cout << i << endl;


    // int n;
    // cout<<"enter the integer;";
    // cin>>n;
    // int * arr=new int[n];
    // cout<<"enter the array elements :";
    // for (int  i = 0; i < n; i++)
    // {
    //     cin>>arr[i];

    //     // note :- arr[i]=*(arr+i)
    // }int ans=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     ans=ans+i;
    // }
    // cout<<ans;
    

    // now we are going to dicuss 2darray
    int n;
    cin>>n;
    int ** arr=new int *[n];
    // creation
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[n];
    }
    // taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    // taking output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
        
    }
    
    // releasing memory
    for (int i = 0; i < n; i++)
    {
        delete []arr[i];
    }
    delete []arr;
    
    return 0;
}