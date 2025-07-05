// direct building min heap using priority queue in O(N) time complexity
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,7,3,4,5,62,2};
    priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end());
    // time complexity of this approach is O(N)
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}