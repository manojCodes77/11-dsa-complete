#include <iostream>
#include <vector>
using namespace std;

class SegmentTree {
    vector<int> tree;
    vector<int> arr;
    int n;

public:
    SegmentTree(vector<int> input) {
        n = input.size();
        arr = input;
        tree.resize(4 * n);
        build(0, 0, n - 1); // root node index, start, end
    }
    // very similar to post order traversal
    void build(int node, int start, int end) {
        // Base case
        if (start == end) {
            tree[node] = arr[start];
            return;
        }
        int mid = start + (end - start) / 2;
        build(2 * node + 1, start, mid);    // left child
        build(2 * node + 2, mid + 1, end);  // right child
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
        return;
    }

    int range(int node, int start, int end, int left, int right) {
        // Fully out of range
        if (end < left || start > right) {
            return 0;
        }
        // Fully in the range
        if (start >= left && end <= right) {
            return tree[node];
        }
        // Overlapping or partially in the range
        int mid = start + (end - start) / 2;
        return range(2 * node + 1, start, mid, left, right) + range(2 * node + 2, mid + 1, end, left, right);
    }

    int query(int left, int right) {
        return range(0, 0, n - 1, left, right); // root, start, end, left, right
    }
    void updateTree(int node,int start,int end,int i,int value){
        // if i lies outside of node
        if(i<start || i>end)return;

        if(start==end){
            tree[node]=value;
            return;
        }

        tree[node]=tree[node]-arr[i]+value;

        int mid=start+(end-start)/2;
        updateTree(2*node+1,start,mid,i,value);
        updateTree(2*node+2,mid+1,end,i,value);
        return;
    }
    void update(int i,int value){
        updateTree(0,0,n-1,i,value);
        arr[i]=value;
        return;
    }
};

int main() {
    vector<int> arr = {3, 6, 4, 25, 5, 13, 18};

    SegmentTree tree(arr);
    int RangeSum = tree.query(2, 5);
    cout << "Range Sum [2, 5]: " << RangeSum << endl;

    tree.update(2,10);
    cout<<"value at index 2 : "<<tree.query(2, 2)<<endl;

    return 0;
}