#include<bits/stdc++.h>
using namespace std;
#define P pair<int,int>
 vector<int> shortestPath(int n, int m, vector<vector<int>> &edges) {
      vector<pair<int, int>> adj[n+1];
      for(auto it: edges){
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
      }
      priority_queue<P,  vector<P>, greater<P>>pq;
      vector<int> dist(n+1, 1e9);
      vector<int> parent(n+1);
      for(int i=1; i<=n; i++)
      parent[i]=i;
      dist[1]=0;
      pq.push({0, 1});
      while(!pq.empty()){
        auto it= pq.top();
        pq.pop();
        int node= it.second;
        int dis= it.first;
        for(auto it: adj[node]){
            int adjNode= it.first;
            int edwt= it.second;
            if(dis+edwt< dist[adjNode]){
                dist[adjNode]= dis+edwt;
                pq.push({dis + edwt, adjNode});
                parent[adjNode]= node;
            }
        }
      }
      if(dist[n]==1e9)
      return {-1};
      vector<int>path;
      int node= n;
      while(parent[node]!= node){
        path.push_back(node);
        node= parent[node];
      }
      path.push_back(1);
      reverse(path.begin(), path.end());
      path.insert(path.begin(), dist[n]);
      return path;


    }
    int main() {
    
    int n = 5, m = 6;
    vector<vector<int>> edges = {
        {1,2,2}, {2,5,5}, {2,3,4}, 
        {1,4,1}, {4,3,3}, {3,5,1}
    };
    
   
    
    vector<int> ans = shortestPath(n, m, edges);
    
    // Output
    cout << "The resulting path weight is: " << ans[0] << endl;
    cout << "The path is: " << endl;
    for(int i=1; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
