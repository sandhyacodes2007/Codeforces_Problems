#include <bits/stdc++.h>
using namespace std;

/* Define P as a shorthand 
for the pair<int, int> type */
#define P pair<int,int>

class Solution{
public:
    vector<int> dijkstra(int V, vector<vector<int>> edges, int S) {

        // Create adjacency list from edges
        vector<vector<vector<int>>> adj(V);
        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int wt = e[2];
            
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt}); // assuming undirected graph
        }
                                
        // Priority queue 
        priority_queue <P, vector<P>, greater<P>> pq;
        
        // Distance array
        vector<int> dist(V, 1e9);
        
        // Distance of source node from itself is 0
        dist[S] = 0;
        
        // Add the source node to the priority queue
        pq.push({0, S});
        
        // Until the priority queue is empty
        while(!pq.empty()) {
            
            // Get the tentative distance
            int dis = pq.top().first;
            
            // Get the node
            int node = pq.top().second;
            pq.pop();
            
            // Traverse all its neighbors
            for(auto it : adj[node]) {
                
                int adjNode = it[0]; // node
                int edgeWt = it[1]; // edge weight
                
                /* If the tentative distance to 
                reach adjacent node is smaller 
                than the known distance */
                if(dis + edgeWt < dist[adjNode]) {
                    
                    // Update the known distance
                    dist[adjNode] = dis + edgeWt;
                    
                    // Push the new pair in priority queue
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        
        // Return the result
        return dist;
    }
};

int main() {
    
    int V = 2, S = 0;
    
    // Edge list: {u, v, weight}
    vector<vector<int>> edges = {
        {0, 1, 9}
    };
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to find the shortest distance 
    of each node from the source node */
    vector<int> ans = sol.dijkstra(V, edges, S);
    
    // Output
    cout << "The shortest distance of nodes from the source node is: ";
    for(int i=0; i < V; i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}