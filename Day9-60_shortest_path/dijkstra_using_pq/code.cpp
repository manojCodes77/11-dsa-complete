#include <bits/stdc++.h> 
using namespace std;
class Compare {
    public:
    bool operator()(pair<int, int> const& p1, pair<int, int> const& p2) {
        return p1.first > p2.first;
    }
};
vector<int> f(int v, vector<vector<int>> adj[], int s) {
    vector<int> ans(v, INT_MAX);
    ans[s] = 0;
    vector<bool> visited(v, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        int dist = pq.top().first;
        int index = pq.top().second;
        pq.pop();

        if (visited[index]) continue;
        visited[index] = true;

        for (int j = 0; j < adj[index].size(); j++) {
            int i = adj[index][j][0];
            int wt = adj[index][j][1];

            if (!visited[i] && dist + wt < ans[i]) {
                ans[i] = dist + wt;
                pq.push({ans[i], i});
            }
        }
    }
    return ans;
}
vector<int> dijkstra(vector<vector<int>> &vec, int v, int e, int s) {
    vector<vector<int>>adj[v];
    for(int i=0;i<vec.size();i++){
        int start=vec[i][0];
        int end=vec[i][1];
        int wt=vec[i][2];
        adj[start].push_back({end,wt});
        adj[end].push_back({start,wt});
    }
    return f(v,adj,s);
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int v=0;
        int e=0;
        int s=0;
        cin>>v>>e>>s;
        vector<vector<int>>mat(e);
        for(int i=0;i<e;i++){
            int start,end,wt;
            cin>>start>>end>>wt;
            mat[i]={start,end,wt};

        }
        vector<int>ans=dijkstra(mat,v,e,s);
        for(int i=0;i<v;i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}