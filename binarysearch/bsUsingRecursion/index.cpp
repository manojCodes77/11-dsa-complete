#include <iostream>
#include <vector >
using namespace std;
bool binary_search(vector<int> &v, int key, int start , int end )
{
    int mid = (start + end) / 2;

    // base condition
    if (start > end)
        return false;
    if (v[mid] == key)
        return true;

    // recursive relation
    if (v[mid] < key)
    {
        start = mid + 1;
        int ans = binary_search(v, key, start, end);
        return ans;
    }
    else if (v[mid > key])
    {
        end = mid - 1;
        int ans = binary_search(v, key, start, end);
        return ans;
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int key = 10;
    bool ans=binary_search(v,key, 0,6);
    if(ans) cout<<"found";
    else cout<<"not found";
    return 0;
}